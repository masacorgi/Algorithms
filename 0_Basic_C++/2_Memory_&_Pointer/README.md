# Basic C++, Memory & Pointer
메모리, 포인터, 이터레이터 등을 공부하고 정리한 자료입니다.   

<br>

index   
1. Memory
2. Pointer
3. Dereference Operator *, 역참조연산자
4. Array to Pointer Decay
5. 프로세스 메모리 구조와 정적/동적 할당
6. Iterator
   
<br>
<br>
<br>

## 1. Memory

```c++
int i;
cout << i << endl; 
cout << &i << endl; // 4바이트 int 변수 i의 첫번째 메모리(첫번째 바이트) 위치 출력
// &(ampersand)는 변수의 메모리 주소를 반환한다. 
	
i = 123;
cout << &i << endl; // 변수 값이 변해도 메모리 주소는 변하지 않는다.
```

<br>

## 2. Pointer
변수의 메모리 '주소'를 담는 타입이 포인터이다.   
포인터의 크기는 OS에 따라 고정된다. 32비트면 32비트(4바이트), 64비트면 64비트(8바이트).   
```c++
int i;
int * i_pointer = &i; // int i의 주소를 담았다.
```

<br>

## 3. dereference operator *, 역참조연산자
*는 포인터타입의 선언, 역참조, 곱하기(이항연산자)까지 세개의 용도로 사용된다.   

1. 타입 선언에 사용되면 해당 타입의 포인터라는 것을 명시
```c++
int * a = &i // a는 int타입의 포인터라고 선언
```
2. 포인터 변수 앞에 사용 시 해당 주소를 역참조, 값을 끄집어내기
```c++
int i = 123;
int * ip = &i;
cout << *ip << endl; // 주소에 담긴 값 조회, 123 출력
// ip = &i, *(ip) = *(&i) = i = 123
```
3. 산술계산에서의 곱하기(이항연산자)
```c++
int c = a * b;
```

<br>

## 4. Array to Pointer Decay
배열의 이름을 주소값으로 쓸 수 있다. 이는 array to pointer decay(부식) 되는 현상을 말한다.   
   
배열의 이름을 T* 라는 포인터에 담으면서 T[N]이란 크기값 N이 사라지고   
첫번째 요소의 주소만 포인터에 바인딩시키는 것.   
```c++
int[3] i = {1,2,3};
int * p = i; // 배열의 이름 i는 & i[0], 즉 배열의 첫번째 요소의 주솟값과 같다.
```
   
배열의 크기정보가 있었는데.. 없어졌다..   
Array만 가능하고 Vector는 불가능   
   
배열과 포인터는 호환성이 높아, 배열의 일부를 다루고 싶을 때 유용하게 사용할 수 있다.
```c++
int i[5] = {1,2,3,4,5};
int* c = &i[2]; // 배열의 이름(i, &i[0])이 아닌 배열의 세번째 요소부터 시작하게 할수있음

cout << c+1 << endl; // &i[2+1]
cout << &i[3] << endl;// 위와 같다.
cout << c[1] << endl; // c[1] == *(c+1), c[1] == &i[4]
```
   
또, C스타일 함수에서는 배열을 함수에 인자로 전달할 때 포인터로 변환(decay)됨.
```c++
void printArray( int* arr, int size){ // 인자로 넘어올때 decay되므로 사이즈 정보가 넘어오지 않아 따로 받아와야 한다.
    for(int i=0; i<size; ++i>){
        cout << arr[i] << " ";
    }
}
int main(){
    int i[3] = {1,2,3};
    printArray(i, 3); // 배열을 인자로 주지만 포인터로 decay되므로 사이즈 정보가 넘어가지 않는다. 따로 줘야됨..
    return 0;
}
```

<br>

## 5. 프로세스 메모리 구조와 정적/동적 할당
운영체제는 프로그램이 프로세스로 실행될때 메모리에 다음과 같은 구조로 공간을 할당한다.
```
Stack

Heap
Data(BSS segment)
Data(Data segment)
Code/Text segment
```
스택은 위 주소부터 할당되고, 나머지는 아래부터 채워진다.   
   
* 스택 영역 : [동적] 지역변수, 매개변수, 함수저장. 컴파일 시 크기가 결정되지만 런타임 시에도 크기가 변경됨   
   
* 힙 영역 : [동적] 동적할당 시 사용되며 런타임에 크기가 결정됨
* 데이터 영역
    * 데이터 영역 : 전역변수, static, const(상수) 변수 중 0이 아닌값으로 초기화 된 변수 저장
    * BSS 영역 : 전역변수, static, const(상수) 변수 중 0으로 초기화되었거나 초기화되지 않은 변수 저장
* 코드/텍스트 영역 : 프로그램의 코드

### 동적할당

런타임 시 메모리를 할당하는 것을 동적할당이라고 함.   
Stack은 지역변수, 매개변수, 실행되는 함수에 의해 동적으로 늘어나거나 줄어들게 사용하는 메모리 영역임.   
   
Heap은 동적으로 할당되는 변수들을 담으며, malloc(), free() 등의 함수로 제어할 수 있음.   
동적으로 관리되는 자료구조도 Heap 영역을 사용함.(ex Vector)   

<br>

## 6. 이터레이터

이터레이터는 컨테이너에 저장되어있는 요소의 주소를 가리키는 개체이며 포인터를 일반화한 것이다.  
이터레이터는 컨테이너 내 각 내용물들의 주소값들이라고 생각하면 될듯하다.    
vector, map 등 다른 구조로 구현된 컨테이너들을 일반화된 이터레이터를 통해 쉽게 순회할 수 있다.   
   
다만 주소값을 바로 반환하지는 못하고 &*을 통해 한단계 더 거쳐서 주소값을 추출해낼 수는 있음
   
<br>

**범위 for문과 iterator를 사용해 vector 요소에 순서대로 하나씩 접근하기**
```c++
vector<int> v;
for(int i=1; i<=5; i++) v.push_back(i);

for(vector<int>::iterator it=v.begin(); it!=v.end(); i++){
    //int형 vector의 이터레이터 it 선언. v.begin()부터 시작, v.end()까지 ++, 하나씩 순회
    cout << *it << ' '; // 이터레이터(주소)를 *(역참조)해 값을 끄집어냄
}
for(auto it=v.begin(); it!=v.end(); i++){
    // auto를 사용해 자료형 선언을 축약한 모습.
    cout << *it << ' '; 
}
```
<br>

**일반 for문의 인덱스를 이용해 vector요소에 접근하기.**   
인덱스를 사용할수 있기에 vector요소의 접근순서에 논리적 연산을 더할수 있다.
```c++
vector<int> v;
for(int i=1; i<=5; i++) v.push_back(i);

for(int i=0; i<5; i++){
    cout << i << "번째 요소 : " << *(v.begin() + i) << endl;
    cout << i << "번째 요소의 주소 : " << &*(v.begin() + i) << endl;
    
}
```
<br>

다음은 이터레이터를 반환하는 컨테이너 함수들이다.
### begin()
컨테이너의 시작 주소를 이터레이터로 반환함.
```c++
vector<int>::iterator begin_it = v.begin();
auto begin_it2 = v.begin();
```

### end()
컨테이너 끝 다음의 위치를 반환함. 즉 이 위치 이전까지만 컨테이너이다라는 것을 의미   
```c++
vector<int>::iterator end_it = v.end();
auto end_it2 = v.end();
```

### advance(iterator, cnt)
해당 iterator를 cnt까지 증가시킴

