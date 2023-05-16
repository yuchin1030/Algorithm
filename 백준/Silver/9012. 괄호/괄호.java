import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Stack;

public class Main {
	
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		 int T = Integer.parseInt(br.readLine());
		 
		 for (int i = 0; i < T; i++) {
			 String str = br.readLine();
			 Stack<Character> st = new Stack<>();
			 
			 for (int j = 0; j < str.length(); j++) {
				 char ch = str.charAt(j);
				 
				 if (ch == '(') {		// 여는 괄호면 스택에 넣어줌
					 st.push(ch);
				 }
				 else if (ch == ')') {
					 if (st.isEmpty())	{	// 스택이 비어 있는데 닫는 괄호가 먼저 나오면 무조건 NO
						st.push(ch);	// 안 넣어주면 YES가 됨
						break;
					 }
					 else				// 스택이 비어 있지 않다는 것은 스택에 여는 괄호가 최소 하나 이상 존재한다는 뜻
						 st.pop();	
				 }
			 }
			 
			 String VPS = st.isEmpty() ? "YES" : "NO";	// 마지막에 스택이 비어 있으면 괄호가 짝을 이룬 것이기 때문에 YES
			 System.out.println(VPS);
		 }
	}

}
