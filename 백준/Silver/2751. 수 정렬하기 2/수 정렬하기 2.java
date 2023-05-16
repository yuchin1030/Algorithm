import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
//import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;


public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());

		// 배열에 숫자 넣음
		//int arr[] = new int[N];
		
		ArrayList<Integer> list = new ArrayList<>();
		for(int i = 0; i < N; i++){
		  list.add(Integer.parseInt(br.readLine()));
		}

		// 오름차순 정렬
		// Arrays.sort(arr);
		
		/* Collections.sort()는 Arrays.sort()와 달리 Timesort 정렬 사용
		   Timesort정렬는 삽입정렬과 반복합병 알고리즘 2개를 함께 사용하여 최악 시간복잡도 O(nlogn)을 보장*/
		Collections.sort(list);

		for(int i : list){
		  sb.append(i).append("\n");
		}
		
		System.out.println(sb);
	}

}