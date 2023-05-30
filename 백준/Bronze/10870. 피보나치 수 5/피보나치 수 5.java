import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		System.out.println(fibonacci(N));
	}
	
	public static int fibonacci(int i) {
		if(i == 0) 
			return 0;
		else if (i == 1)
			return 1;
		else
			return fibonacci(i-1) + fibonacci(i-2);
	}
}