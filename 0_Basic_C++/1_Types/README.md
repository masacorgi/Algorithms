# Basic C++, Types

## 타입
변수든 메소드든 항상 사용되는 코드 이전에 선언되어있어야 한다.

인자만 선언해놓고 아래쪽에 정의하는 방식도 사용가능   
하지만 알고리즘 코딩은 시간싸움이므로 한방에 선언과 정의를 하는것이 좋다.   

## char
```
char : 'a', 1바이트
    char a = NULL;
    char b = '\0';
    char c = 0;
    모두 널 문자로 초기화한다. 널은 문자열의 끝을 가리키는 문자이며, 아스키값이 0이기 때문에 숫자 0으로 문자변수를 초기화해도 널문자로 변환된다. 
    정의 없이 선언만 해도 문자변수는 널문자로 초기화된다.
```
## string 
string : char를 char[ ] 배열로 선언하거나 그냥 string으로 선언해 문자모음, 즉 문자열을 선언.   
   
char s[10];   
string a;   
   
a[0], a[1] 과 같이 한자리씩 사용도 가능하나, 한글자당 1바이트인 영어와 달리 한글은 3바이트이므로 한글자를 출력하려면 3바이트씩 묶어야 한다.   
```
string a = "류현진";   
cout << a[0] << a[1] << a[2]; //'류' 출력됨
```

**자주사용되는 string 메소드들**
```
push_back() : 맨뒤에 글자 하나 추가. 하나 추가기때문에 보통 += 써서 문자열을 더한다.
ex) stringvalue.push_back('K');

pop_back() : 문자열 끝 삭제, O(1)

begin() : 문자열 첫번째 요소를 가리키는 이터레이터 반환
end() : 문자열 마지막 요소 그 다음을 가리키는 이터레이터 반환
begin, end는 자료구조(vector, Array, 연결리스트, map, set)에서도 동일하게 존재

size() : 문자열 사이즈 반환. O(1)의 시간복잡도

insert(위치, 문자열) : 지정한 위치에 문자열을 삽입, O(n)
        stringvalue.insert(3,"insert!");

erase(위치, 크기) : 지정한 위치에서 크기만큼 문자열 삭제, O(n)
        erase(3, 5);


find(문자열) : 특정 문자열 찾아 위치를 반환. 못찾으면 string:npos 반환
string::npos는 size_t 값의 최댓값(사용하는 OS의 최대정수)
두번째 인자로 찾기 시작할 위치를 넣을 수 있다.(선택)

문자열의 길이를 N, 찾는 문자열의 길이를 M이라고 했을 때 보통 O(n)의 시간복잡도이지만 ( O(N+M)->O(2N)->O(N) ) 특정 문자열 패턴이 반복되고 불일치하면 최악의 경우 O(N*M)!!!!!!! 까지 갈수도 있음

substr(위치,크기) : 지정한 위치에서 크기만큼의 문자열 추출, O(n)
크기 지정안할 시 지정한 위치부터 맨 끝까지 추출

```
```
메소드는 아니지만 꿀팁
문자열을 더할때 + 보다 += 가 조금 더 빠르다.
s1 += s2; // fast. 기존 문자열에 추가해서 확장
s1 = s1 + s2 // slow. 새로운 문자열을 만들어 재할당하는 방식
```

### ASCII 
문자를 정수처럼 대하여 + - 시키면 아스키코드값에 적용해 반응한다.   
```c++
char a = 'a';
int n = (int)a; // char -> int 형변환

```

### reverse()
string은 뒤집는 메서드를 지원하지 않는다. 뒤집으려면 STL이 지원하는 reverse()를 쓰면됨   
   
void reverse( BidirectionalIterator first, BidirectionalIterator last);
문자열 시작 이터레이터, 끝 이터레이터를 받아서   
아무것도 반환하지 않고 원본 문자열을 바꿔버림   
   
```c++
string a = "abcdef";
reverse(a.begin(), a.end()); // fedcba
reverse(a,begin(), a.end()); // abcdef
reverse(a.begin()+3, a.end()); // abfced
```

### split  (중요!!)
C++은 STL에서 split() 함수를 지원하지 않기때문에 **만들어서 써야한다.**

```c++
vector<string> split(const string& input, string delimiter){
	vector<string> result;
	
	auto start = 0; // 시작위치 
	auto end = input.find(delimiter); // 첫번째 구분자 위치 
	
	while(end != string::npos){
		result.push_back(input.substr(start, end - start));
		//result에 substring으로 시작위치부터 end위치(구분자 전)까지 잘라서 넣음 
		start = end + delimiter.size();
		// start위치 갱신(end위치 + 구분자크기(1)) 
		end = input.find(delimiter, start);
		// end 위치 갱신(start 위치 이후 구분자 위치) 
	}
	
	result.push_back(input.substr(start));
	
	return result;
}
```
   
split(문자열, 구분자)로 사용할 수 있음   
   
### 범위기반 for 루프, Range_based_for_loop
C++ 11부터 범위기반 for문을 쓸 수 있다.
for( int element : elements ){ cout << element; }   
   
range based for는 런타임 시기가 아닌 그전 컴파일 단계때 크기가 정해진다.   
런타임 시기에 n을 입력받아 그 크기만큼의 Array를 선언하고 범위기반 for를 사용하면   
컴파일 시기에는 Array 크기가 0이었기 때문에 이를 기반으로 범위기반 for의 크기가 정해지고, 런타임 시기에 Array 크기가 달라지면 에러가 발생함   
   
런타임 시에 크기를 변경되는 코딩을 하고 싶다면 array 대신 배열을 사용해야됨   
굳이 Array를 쓰고 싶다면 전역변수로 크기를 고정해 선언하고 사용하면 됨..

### atoi(s.c_str)

문자열로 된 숫자를 정수 int로 변환하는 방법 중 하나.   
atoi는 c 표준 라이브러리 함수로 const char* 타입의 c 문자열을 int로 변환하고 숫자가 아닌 문자일 경우 0을 반환한다.   
.c_str()는 string을 const char* 타입으로 바꿔줌   

```c++
string s = "asdef";
string s2 = "10";
cout << atoi(s.c_str()); // 0
cout << atoi(s2.c_str()); // 10
```

### stoi(string s)
string으로 된 숫자를 int로 변환하고 싶다면 stoi를 사용하면 되지만   
stoi는 숫자가 아닐때 0을 반환하지 않고 에러를 발생시킨다.

## bool

54p
