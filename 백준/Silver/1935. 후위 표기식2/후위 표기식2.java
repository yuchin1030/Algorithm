import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String str = br.readLine();

        // 피연산자 값 따로 저장하는 배열
        double arr[] = new double[N];
        for(int i = 0; i < N; i++) {
            arr[i] = Double.parseDouble(br.readLine());
        }

        Stack<Double> st = new Stack<>();
       
        for(int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if(ch >= 'A' && ch <= 'Z') {  // 피연산자일 경우
                st.push(arr[ch - 'A']);
            }else {  // 연산자일 경우
                double d1 = st.pop();
                double d2 = st.pop();
                double result = 0;
                switch(ch) {
                    case '+' :
                    	result = d2 + d1;
                        break;
                    case '-' :
                    	result = d2 - d1;
                        break;
                    case '*' :
                    	result = d2 * d1;
                        break;
                    case '/' :
                    	result = d2 / d1;
                        break;
                }
                st.push(result);
            }
        }
        System.out.printf("%.2f", st.pop());
	}

}
