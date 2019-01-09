# 자료구조
## 1. 스택(Stack)
특징
* 한쪽 끝에서만 자료를 넣고 뺄 수 있는 자료구조
* 마지막으로 넣은 것이 가장 먼저 나오는 LIFO(Last In First Out)
* 스택은 C++의 경우 STL의 stack
* Java 는 java.util.Stack 사용

함수
* push(data)
* pop()
* empty()

**연습 문제**
* ex) 괄호쌍 매칭 문제 https://www.acmicpc.net/problem/9012
```Java
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n ; i++) {
            String s = br.readLine();
            int cnt = 0;

            for (int j = 0; j < s.length(); j++) {
                if(s.charAt(j)=='(')cnt++;
                else cnt--;
                if (cnt<0)break;
            }

            if (cnt==0) System.out.println("YES");
            else System.out.println("NO");
        }
        br.close();
    }
}
```
* ex) 쇠막대기 문제 https://www.acmicpc.net/problem/10799
```java
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s = br.readLine();
        int sum = 0; //전체 막대기 수
        int pipe = 0; //현재 막대기 수
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') pipe++;
            else {
                pipe--;
                if (s.charAt(i-1)=='(')sum += pipe; //짤렸을 때,
                else sum++;
            }
        }

        System.out.println(sum);
    }
}

```

* ex)  에디터 문제 https://www.acmicpc.net/problem/1406
```Java
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s = br.readLine();
        int n = Integer.parseInt(br.readLine());
        Stack<Character> left = new Stack<>();
        Stack<Character> right = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            left.push(s.charAt(i));
        }
        for (int i = 0; i < n; i++) {
            String cmd = br.readLine();
            char f = cmd.charAt(0);

            switch (f) {
                case 'L': {
                    if (!left.empty())
                        right.push(left.pop());
                }
                break;
                case 'D': {
                    if (!right.empty())
                        left.push(right.pop());
                }
                break;
                case 'B': {
                    if (!left.empty())left.pop();
                }
                break;
                case 'P': {
                    char data = cmd.charAt(2);
                    left.push(data);
                }
                break;
            }
        }

        while (!left.empty())right.push(left.pop());
        while (!right.empty()) System.out.print(right.pop());

        br.close();
    }
}
```
