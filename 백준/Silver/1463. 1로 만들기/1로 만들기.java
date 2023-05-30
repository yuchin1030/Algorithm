import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {

	public static void main(String[] args) throws IOException{
		 BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	        int x = Integer.parseInt(br.readLine());

	        int dp[] = new int[x + 1];

	        dp[0] = dp[1] = 0;

	        for (int i = 2; i <= x; i++) {
	            dp[i] = dp[i - 1] + 1; // 먼저 1을 빼줌. 
	            if (i % 2 == 0) dp[i] = Math.min(dp[i], dp[i / 2] + 1); // 1을 뺀 값과 2로 나눈 값 중 최소값을 dp[i]에 저장.
	            if (i % 3 == 0) dp[i] = Math.min(dp[i], dp[i / 3] + 1); // 1을 뺀 값과 2로 나눈 값 중 최소값인 dp[i]와 3으로 나눈 값 중 최소값을 dp[i]에 저장. 
	        }

	        System.out.println(dp[x]);
		
	}
	
	/*N으로 각각 2와 3으로 나누면 count는 +1에 각 연산의
	 나머지 값을 더해준 것이 된다.
	 나머지 값은 빼기 1했을 때의 count 값과 같기 때문
	 
	 N = 5, count = 0

	 N = 5 / 2 = 2, count = 0 + 1 + 1(나머지값)

	 N = 2 / 2 = 1, count = 2 + 1 + 0(나머지값)

	 N = 1 이므로 return count -> 3이 반환 */

}