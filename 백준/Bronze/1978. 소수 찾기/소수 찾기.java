import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		//  hasMoreTokens(): StringTokenizer 자체가 토큰이 남아있는지의 여부를 true, false 로 반환시켜줌
		br.readLine();	// 굳이 N을 쓸 필요 없음
		int cnt = 0;	// 소수 개수
		
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		while(st.hasMoreTokens()) {	
	        
			// 소수인 경우 true, 아닌 경우 false   
			boolean isPrime = true;
			
			int num = Integer.parseInt(st.nextToken());
			
			if(num == 1) {
				continue;
			}
			for(int i = 2; i <= Math.sqrt(num); i++) {
				if(num % i == 0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime) {
				cnt++;
			}
		}
		System.out.println(cnt);		
	}
}

