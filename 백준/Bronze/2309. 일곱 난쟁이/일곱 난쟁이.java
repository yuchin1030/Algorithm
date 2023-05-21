import java.util.Arrays;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int dwarf[] = new int[9];
		int sum = 0;
		int fake1 = 0, fake2 = 0;

		for (int i = 0; i < dwarf.length; i++) { // 난쟁이 키 입력
			dwarf[i] = Integer.parseInt(br.readLine());
			sum += dwarf[i]; // 난쟁이 9명의 키의 합
		}
		Arrays.sort(dwarf); // 키를 오름차순으로 정렬
		
		for(int a = 0; a < dwarf.length-1; a++) { // 브루트 포스
			for(int b = a+1; b < dwarf.length; b++) {
				if(sum - dwarf[a] - dwarf[b] == 100) { // *****
					fake1 = a;
					fake2 = b;
					break;
				}
			}
		}
		
		for(int j = 0; j < dwarf.length; j++) { // 진짜 난쟁이 키 출력
			if(j == fake1 || j == fake2) 
				continue;
			sb.append(dwarf[j]).append("\n");
		}
		System.out.println(sb);
	}

}
