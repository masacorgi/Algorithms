# Basic C++
기본과 입력 출력
## 기본
### Header, namespace

```c++
#include <bits/stdc++.h> // C++의 모든 표준 라이브러리가 포함된 헤더파일
using namespace std;// 많은 라이브러리를 불러서 사용하다보면 발생하는 변수명 중복을 막기 위해 변수명에 걸어놓는 범위. 
// cin, cout을 사용할때 std라는 namespace를 사용해 std::cin 이렇게 사용해야 하나 std를 기본 namespace로 설정해 그냥 cin, cout으로 호출할 수 있게함
string a;// 문자열 변수 a 선언
int main(){
cin >> a;// 변수 a 입력. 입력함수로는 cin, scanf 있음
cout << a << "\n";// 변수 a 출력. 출력함수로는 cout, printf 있음
return 0; // main함수 종료. cpp 파일 하나당 하나의 main 함수 필요
}

```

### typedef
typedef 타입 별칭  
타입, 사용자 정의 타입(struct, class)를 다른 이름으로 변경(더 짧게)   

```c++
#include <bits/stdc++.h>
using namespace std;

typedef int i; // int를 i로 지칭하겠소
int main(){
    i a = 1; // int a = 1과 동일
    cout << a << '\n'; // 
    return 0;
}
```

### define
상수, 매크로 정의   
#define 이름 값   

```c++
#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592
#define loop(x,n) for(int x=0; x<n; x++)
// for문을 loop라는 이름으로 define함. 매크로설정
int main(){
    cout << PI << '\n';
    int sum = 0;
    loop(i,10){
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}
```

### STL
c++이 제공하는 standard template library. 자료구조, 함수등 제공.   
알고리즘, 컨테이너, 이터레이터, 펑터 총 4가지 제공.   
```
* 알고리즘 : 정렬, 탐색 등 함수 ex) sort()

* 컨테이너 : c++ 제공 자료구조
    * sequence container : 단순저장 자료구조, array, vector, deque, forward_list, list

    * associate container : 자료 저장시 자동정렬되는 자료구조. 중복키 가능한 것은 이름에 multi 붙임. set, map, multiset, multimap

    * unordered associative container : 자료가 저장되도 정렬안되는 자료구조. unordered_set, unordered_map, unordered_multiset, unordered_multimap

    * container adapter : 시퀀스 컨테이너를 이용해 만든 자료구조. stack, queue는 deque로 만들어져 있으며 priority_queue 는 vector로 만들어짐

* 이터레이터

* 펑터 : 함수 호출 연산자를 오버로드하는 클래스의 인스턴스

```
## 입력 출력
### 입력

cin과 scanf가 있음.   
문제에서 형식을 기반으로 입력이 주어지지 않은 경우 scanf보다 cin 을 쓰는것이 좋음.   
```
cin : 스페이스, 엔터 전까지 입력 받음, 변수의 타입에 맞춰 들어감   
        cin >> a >> b; // a 부터 차례로 개행문자 전까지 입력
        !! 앞의 개행문자는 무시하고, 남는 개행문자는 버퍼에 남겨둔다.

scanf : 받는 형식을 지정해서 받음. 입력형식이 까다롭거나 이를 이용해야할때 사용   
        scanf("%d %lf %c", &integerVal, &doubleVal, &characterVal);

getline: 한번에 다 받으려면 getline() 써야됨
        getline(cin, a)// 한줄 전체를 a에 입력, \n 전까지 입력받음.
    
        다른 종결문자를 원할시 세번째 파라미터에 명시할것
        getline(cin, a, '.');
        !! 종결문자까지 포함해서 읽고, 종결문자를 버림. 버퍼에 남는것 없다.
```
```
주 의 할 점 
cin 은 개행문자(스페이스, 탭, 엔터)를 만나면 그 전까지 입력받고 남은건 버퍼에 남겨둠
getline은 엔터를 만나면 그걸 포함해서 입력받고 엔터는 버림

cin을 쓰고 getline을 쓰면 cin이 남긴 엔터를 getline이 보고 읽을 수 있음
물론 '\n'만 읽고 '\n'을 버리기때문에 아무것도 입력되지 않는다.

때문에 cin을 쓰고 getline을 쓸때는 
1. string bufferflush;에 getline()을 써서 공백을 버리는 방법 (변수명은 상관없음)
2. std::cin.ignore() 을 사용해서 줄바꿈문자 제거하는 방법
3. 모조리 getline()만 사용하는 방법
으로 혼돈을 막아야 한다.

```
### 자주쓰는 타입
```
%d : 정수 int
%lf : 실수 double
%ld : long long
%c : 문자 char
%s : 문자열 string
```

## 출력
```
cout << a << ' ' << b << " "<< '\n';

cout은 실수 출력 시 소숫점 아래 5자리까지 반올림해서 출력함
출력 자리를 제어하고 싶을 시  << fixed << setprecision(자릿수) 추가해서 사용
cout << fixed << setprecision(7) << doublevalue << '\n';

printf는 scanf와 같이 형식을 지정해서 출력함
printf("%d %c %s %lf", intvalue, charvalue, stringvalue, doublevalue);
```
```
주 의 할 점
printf로 문자열을 출력할땐 문자열의 포인터를 제공해주어야 하므로
문자열.c_str() 메소드를 사용해서 포인터를 제공해야함 

printf("printf string : %s", stringvalue.c_str());
```
