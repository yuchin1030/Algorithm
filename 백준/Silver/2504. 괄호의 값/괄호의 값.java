import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();

		Stack<Character> stack = new Stack<>();
		boolean flag = true; 
		int answer = 0;
		int value = 1;
		
		for(int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch == '(') {
				stack.push(ch);
				value *= 2;
			}
			else if(ch == '[') {
				stack.push(ch);
				value *= 3;
			}
			else {
				if(ch == ')') {
					if(stack.isEmpty() || stack.peek() != '(') {
						flag=false;
						break;
					}
					if(str.charAt(i-1) == '(') {
						answer += value;
					}
					stack.pop();
					value /= 2;
				}else if(ch == ']') {
					if(stack.isEmpty() || stack.peek() != '[') {
						flag=false;
						break;
					}
					if(str.charAt(i-1) == '[') {
						answer += value;
					}
					stack.pop();
					value /= 3;
				}
				else {
					flag = false;
					break;
				}
			}
		}
		if(!flag || !stack.isEmpty()) {
			System.out.println(0);
		}else {
			System.out.println(answer);
		}
	}
}