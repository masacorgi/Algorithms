# Basic C++, Types
여러 자료형과 pair, tuple 그리고 형변환을 공부한 자료 정리입니다.   

index   
1. char
2. string
3. bool
4. int
5. long long
6. double
7. pair & tuple
8. auto
9. 타입 변환
   
<br>
<br>
<br>
변수든 메소드든 항상 사용되는 코드 이전에 선언되어있어야 한다.

인자만 선언해놓고 아래쪽에 정의하는 방식도 사용가능   
하지만 알고리즘 코딩은 시간싸움이므로 한방에 선언과 정의를 하는것이 좋다.   

## 1. char
```
char : 'a', 1바이트
    char a = NULL;
    char b = '\0';
    char c = 0;
    모두 널 문자로 초기화한다. 널은 문자열의 끝을 가리키는 문자이며, 아스키값이 0이기 때문에 숫자 0으로 문자변수를 초기화해도 널문자로 변환된다. 
    정의 없이 선언만 해도 문자변수는 널문자로 초기화된다.
```
## 2. string 
string : char를 char[ ] 배열로 선언하거나 그냥 string으로 선언해 문자모음, 즉 문자열을 선언.   
   
char s[10];   
string a;   
   
a[0], a[1] 과 같이 한자리씩 사용도 가능하나, 한글자당 1바이트인 영어와 달리 한글은 3바이트이므로 한글자를 출력하려면 3바이트씩 묶어야 한다.   
```
string a = "류현진";   
cout << a[0] << a[1] << a[2]; //'류' 출력됨
```
<br>

### 자주사용되는 string 메소드들
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
<br>

### ASCII 
문자를 정수처럼 대하여 + - 시키면 아스키코드값에 적용해 반응한다.   
```c++
char a = 'a';
int n = (int)a; // char -> int 형변환

```
<br>

### reverse()
string은 뒤집는 메서드를 지원하지 않는다. 뒤집으려면 STL이 지원하는 reverse()를 쓰면됨   
   
void reverse( BidirectionalIterator first, BidirectionalIterator last);   
문자열 시작 이터레이터, 끝 이터레이터를 받아서 아무것도 반환하지 않고 원본 문자열을 바꿔버림   
   
```c++
string a = "abcdef";
reverse(a.begin(), a.end()); // fedcba
reverse(a,begin(), a.end()); // abcdef
reverse(a.begin()+3, a.end()); // abfced
```
<br>

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
   <br>

### 범위기반 for 루프, Range_based_for_loop
C++ 11부터 범위기반 for문을 쓸 수 있다.
for( int element : elements ){ cout << element; }   
   
range based for는 런타임 시기가 아닌 그전 컴파일 단계때 크기가 정해진다.   
런타임 시기에 n을 입력받아 그 크기만큼의 Array를 선언하고 범위기반 for를 사용하면   
컴파일 시기에는 Array 크기가 0이었기 때문에 이를 기반으로 범위기반 for의 크기가 정해지고, 런타임 시기에 Array 크기가 달라지면 에러가 발생함   
   
런타임 시에 크기를 변경되는 코딩을 하고 싶다면 array 대신 배열을 사용해야됨   
굳이 Array를 쓰고 싶다면 전역변수로 크기를 고정해 선언하고 사용하면 됨..

<br>

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
<br>

### stoi(string s)
string으로 된 숫자를 int로 변환하고 싶다면 stoi를 사용하면 되지만   
stoi는 숫자가 아닐때 0을 반환하지 않고 에러를 발생시킨다.
```c++
string s = "10";
cout << atoi(s.c_str()); // 10
```
<br>

## 3. bool
true/false, 1/0으로 선언 가능   
c++ 에서는 bool(3) == 1로 0이 아닌 값(string 제외)은 모두 1이 나오게 사용할 수 있다.   

<br>

## 4. int
4바이트 정수. -2147483648 ~ 2147483647, 약 -20억부터 20억   
문제풀이에 20억 이상의 숫자가 필요하다면 int가 아닌 long long을 사용해야함.   

문제 풀이에서 대부분 int의 최댓값을 사용할 때 987654321 아니면 1e9을 사용함
(1e9은 exponential notation으로 표현된 숫자로 1x10^9, 즉 10억)   
INF + INF or INF + 다른 수 연산으로 int 최댓값 오버플로우를 방지하기 위함..
```c++
const int INF = 987654321; // INF는 infinity의 약자. 무한대는 아니지만 최댓값 규정에 사용
const int INF2 = 1e9;
// const 는 선언 후 수정이 불가능한 '상수' 변수 선언에 사용
```

int / int 연산에서 발생하는 소숫점 아래는 모두 버려짐.   
int / double 연산 시는 자동으로 double로 형변환됨

### Overflow, Underflow
타입의 허용범위를 넘어갈때 발생하는 에러.   
int 의 경우 2147483647을 넘어가는 숫자는 최솟값(-2147483648) + 넘어간 숫자로 오버플로우가,   
-2147483648 보다 작은 숫자는 최댓값(2147483647) - 넘어간 숫자로 언더플로우가 발생한다.   

<br>

## 5. long long
4바이트 int보다 범위가 큰 8바이트 정수(–9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807)   
+-9000 * 1000조   
   
문제 범위가 int의 최댓값을 20억을 넘긴다면 long long을 사용해야됨.
```c++
//int와 비슷하게 INF를 정의하고 쓰는게 좋다.
const long long = 1e18;
```

### unsigned long long
8바이트 양의 정수. 음수 표현을 포기하고 그만큼을 양의정수 범위로 늘린 자료형.  
0 ~ 18,446,744,073,709,551,615

<br>

## 5. double, float
### double
8바이트 실수. 소수점 아래 15자리까지 표현 가능
### float
4바이트 실수. 소수점 아래 7자리까지 표현 가능

double이 더 정확한 계산이 가능하니 실수 연산에는 double을 쓰는것이 좋다.

<br>

## 7. pair & tuple
pair, tuple 모두 타입이나 자료구조가 아니라 c++ 제공 utility 라이브러리의 템플릿 클래스이며 자주 사용된다.   
   
pair 두가지 값을 담을 때 사용.   
tuple 세가지 값을 담을 때 사용.   

```c++
pair<int, int> p1 = {1,2};
pair<int, int> p2 = make_pair(1,2);
tupe<int, int, int> t = make_tuple(1,2,3);

int a,b;
a = p1.first;
b = p1.second;
tie(a,b) = p1; // 위 두줄과 같은 동작

int a,b,c;
a = get<0>(t);
b = get<1>(t);
c = get<2>(t);
tie(a,b,c) = t; // 위 세줄과 같은 동작
```
get<>..로 꺼내기 불편하기 때문에 세가지 이상의 멤벼변수가 필요하면 tuple보단 struct를 쓰는것도 좋다.

<br>

## 8. auto
auto는 타입 추론으로 자동 결정되는 자료형.
```c++
vector<pair<int, int>> v = {{1, 1}, {2, 2}, {3,3}};

for(pair<int, int> it : v){
        cout << it.first << " : " << it.second << endl; 
}
	
for(auto it : v){ // vector v의 내용물을 보고 자동으로 pair<int,int>로 설정해줌. 
	cout << it.first << " : " << it.second << endl;
}
```

<br>

## 9. 타입 변환

```c++
(바꿀 타입)대상변수
double d = 1.234;
int n = (int)double_value;
// 형변환 연산자는 바로 뒤에 오는 단일 값만을 변환하므로 순서에 유의하거나 괄호로 범위를 묶어서 알려줘야한다.
```
   
int를 double로 나누면 더 큰 자료형인 double로 결과 값이 나오지만, 코딩테스트에서 이를 신경쓰기 쉽지 않기때문에 처음부터 같은 자료형으로 계산 하는 것이 틀리지 않을 확률을 높여준다.
   
자료형이 다른 숫자끼리 계산할 때, 형변환을 사용하지 않으면 자동으로 형변환 해주는데, 다음과 같은 순서대로 형변환이 일어난다.
```
int -> unsigned int -> long -> unsigned long -> long long -> unsigned long long -> float -> double -> long double
```
   
vector의 .size() 등 음수가 나올 수 있는 연산에 주의가 필요하다.   
size()는 unsigned int를 반환하므로 크기보다 작은 수가 나오는 연산을 수행하면 언더플로우가 발생해 엄청 큰 양수가 나옴..   
(int)로의 형변환이 필요함.   
```c++
vector<int> a = {1,2,3};

cout << a.size - 10 << endl; // a.size()는 unsigned int, 언더플로우 발생
cout << (int) a.size - 10 << endl; // -7 정상출력
```
   
또 아스키 코드를 사용해 문자를 숫자로, 숫자를 문자로 표현해낼 수 있다.   
'a' 는 아스키값이 97이고 하나씩 증가해 'z'는 122이다.   
```c++
char = 'a';
cout << (int)a - 97; // 0
cout << (int)a - 'a' // 0
cout << (int)'z' - 97 // 25
```

같은 방식으로 문자열로 이루어진 숫자도 분리해 저장할 수 있다.
```c++
string s = "123456";
	
vector<int> digits;
	
for(int i=0; i<s.length(); i++){
	digits.push_back( (int)s[i] - '0' ); //'0' 아스키값은 32이므로 32를 빼면 진짜 숫자 가 됨
}
```

