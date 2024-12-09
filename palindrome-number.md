# Palindrome Number

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

## 내 제출

```java
class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        String strX = Integer.toString(x);
        
        StringBuffer sb = new StringBuffer(strX);
        String reversedX = sb.reverse().toString();

        if(strX.equals(reversedX)){
            return true;
        }else{
            return false;
        }

    }
}
```

## 정답
```
class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;

        int temp = x;
        int reversed = 0;

        while(temp != 0){
            reversed *= 10;
            int num = temp % 10;
            reversed += num;
            temp /= 10;
        }

        return (reversed == x);
    }
}
```

내 제출도 정답조건에 맞아 통과되었지만 시행시간이 8ms 로 매우 느렸음
런타임이 빠른 솔루션을 확인했더니 내장함수를 사용하지 않고 수학적으로 접근했다.
정답 코드로 수정하니 수행시간이 4ms 로 두배나 빨라졌음

내장함수가 편하고 간단한 것은 맞지만 알고리즘 공부이지 함수 사용법 습득이 아니므로 사용을 자제해야겠다
