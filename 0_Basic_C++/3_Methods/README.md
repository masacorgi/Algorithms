# Basic C++, Methods

알고리즘 풀이에 사용되는 다양한 C++의 함수를 공부하고 정리한 자료입니다.   

<br>

index   
1. fil( ), memset( )
2. memcopy( ), copy( )
3. sort( )
4. stable_sort( )
5. unique( )
6. lower_bound( ), upper_bound( )
7. accumulate( )
8. max_element( )
9. min_element( )
10. 메모리 주소끼리의 뺄셈
   
<br>
<br>
<br>

## 1. fill( ), memset( )
배열을 초기화 할 때 사용하는 함수.   
fill()은 모든 값으로 초기화할 수 있다.   
memset()은 -1, 0으로만 초기화할 수 있음.   
fill()이 더 편하지만 -1,0의 경우 memset이 더 빠르기 때문에 memset을 쓰는게 좋음.
### fil( )
O(n)의 시간복잡도를 가짐.   
```c++
void fill(ForwardIterator first, ForwardIterator last, const T& val); 
//fill(시작값, 끝값+1, 채울값) 끝값은 포함하지 않고 그 이전까지 초기화함.

int a[10];
int b[10][10];

fill(&a[0], &a[10], 100); // 마지막값은 포함하지 않기 때문에 마지막 값인 a[9] 다음 주소인 a[10]을 제시해야함.
fill(a, a+10, 200); // 1차원 배열의 경우 배열이름 + 숫자로 사용할 수 있음
fill(&b[0][0], &b[0][0] + 10*10, 7); // 2차원은 이름+숫자 못씀.. 주소+숫자는 가능하다.
fill(&b[0][0], &b[9][10], 6);
```
   
### memset( )
memset()은 바이트 단위로 초기화하며, 0, -1, char형 1문자로 초기화할때만 사용함.

```c++
void * memset(void * ptr, int value, size_t num);
// memset(배열이름, 채울값, 배열크기)
int a1[1000];
int a2[1000][1000];
char a[1000][1000];
memset(a1, -1, sizeof(a1)); // 배열이름, 채울값, 배열크기
memset(a2, 0, sizeof(a2));
memset(a, 'K', sizeof(a)); // 문자로도 된다.
```

### {, }
```c++
int a[10] = {0, };
```
이런식으로 초기화는 가능하나 초반에 한번 하는 정적 코드에만 정상적으로 동작한다.

<br>

## 2. memcopy( ), copy( )

### Shallow Clone & Deep Clone
어떤 변수를 복사할 때 Shallow Clone(얕은 복사)를 하면 메모리 주소값만을 복사하고, Deep Clone(깊은 복사)를 하면 새로운 메모리 공간을 할당하고 값을 복사해 하나 더 생성한다.(주소값도 새로 생긴다.)   
   
얕은 복사를 하게 되면 주소값만을 복사하기 때문에 복사한 변수를 사용하면 원본 변수의 값도 변경된다.   
깊은 복사를 하게 되면 새로운 주소에 값이 생성되므로 원본과는 별개로 사용할 수 있다.   
   
memcpy()는 Array 깊은 복사에,   
copy()는 Array, vector 깊은 복사에 사용된다.

### memcpy( ) - 깊은복사 - Array
memcpy()는 어떤 변수의 메모리에 있는 값들을 다른 변수의 **"특정 메모리값"**으로 복사한다.
복사 후에도 기존 배열의 값이 수정되지 않은 상태값이 필요할 때 사용한다.
```c++
memcpy(void* destination, const void* source, size_t num)
// 도착공간, 출발소스, 소스크기

int v[3] = {1,2,3};
int ret;
ret = memcpy(ret, v, sizeof(v));
```
### copy( ) - 깊은복사 - Array, Vector


<br>

## 3. sort( )

<br>

## 4. stable_sort( )

<br>

## 5. unique( )

<br>

## 6. lower_bound( ), upper_bound( )

<br>

## 7. accumulate( )

<br>

## 8. max_element( )

<br>

## 9. min_element( )

<br>

## 10. 메모리 주소끼리의 뺄셈

<br>
