# Roman to Integer
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].



## My Submit
```java
class Solution {
    public int romanToInt(String s) {
        String[] arr = s.split("");
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            int num = 0;
            int nextNum = 0;

            if(arr[i].equals("I")){ num = 1; }
            else if(arr[i].equals("V")){ num = 5; }
            else if(arr[i].equals("X")){ num = 10; }
            else if(arr[i].equals("L")){ num = 50; }
            else if(arr[i].equals("C")){ num = 100; }
            else if(arr[i].equals("D")){ num = 500; }
            else{ num = 1000; }

            if(i != s.length()-1) {
                if(arr[i+1].equals("I")){ nextNum = 1; }
                else if(arr[i+1].equals("V")){ nextNum = 5; }
                else if(arr[i+1].equals("X")){ nextNum = 10; }
                else if(arr[i+1].equals("L")){ nextNum = 50; }
                else if(arr[i+1].equals("C")){ nextNum = 100; }
                else if(arr[i+1].equals("D")){ nextNum = 500; }
                else{ nextNum = 1000; }
            }

            if(nextNum > num){
                num = nextNum - num;
                ans += num;
                i++;
                continue;
            }
            ans += num;

        }
        return ans;
    }
}
```
![image](https://github.com/user-attachments/assets/ff0d745b-928a-4553-ac26-d4e266822743)   
너무 느림...

## Right Solution
```java
class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> m = new HashMap<>();

        m.put('I', 1);
        m.put('V', 5);
        m.put('X', 10);
        m.put('L', 50);
        m.put('C', 100);
        m.put('D', 500);
        m.put('M', 1000);

        int ans = 0;

        for(int i=0; i<s.length(); i++){
            if( i< s.length()-1  &&  m.get(s.charAt(i)) < m.get(s.charAt(i+1))){
                ans -= m.get(s.charAt(i));
            } else {
                ans += m.get(s.charAt(i));
            }
        }
        return ans;
    }
}
```
![image](https://github.com/user-attachments/assets/20aa8148-fc25-459f-82a0-ba9d0589452a)   
10ms -> 6ms 단축   
HashMap 사용으로 조건문 때려넣기를 회피하고 문자->숫자 형변환 부하시간을 줄임

## Solution Upgrade
```java
class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> m = new HashMap<>();

        m.put('I', 1);
        m.put('V', 5);
        m.put('X', 10);
        m.put('L', 50);
        m.put('C', 100);
        m.put('D', 500);
        m.put('M', 1000);

        int ans = 0;

        for(int i=0; i<s.length(); i++){
            if( i< s.length()-1  &&  m.get(s.charAt(i)) < m.get(s.charAt(i+1))){
                ans += m.get(s.charAt(i+1)) - m.get(s.charAt(i)); // 수정부분
                i++;
            } else {
                ans += m.get(s.charAt(i));
            }
        }
        return ans;
    }
}
```
뒷 문자와 비교해서 뒷문자가 더 크면 로마자 4, 9를 나타내는 방식이므로 이때 바로 빼서 정답 ans에 더함
i++로 다음 반복을 스킵하므로 조건문1, 연산1 을 줄여보았다.

![image](https://github.com/user-attachments/assets/f8f3c692-1158-4d46-b54e-9e475c18dba3)   
6ms -> 5ms 단축 성공,,

빅O 시간복잡도 계산법을 제대로 공부해서 어떤 연산을 줄여야 얼만큼 더 줄어드는지 개념 파악이 필요하다


