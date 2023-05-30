import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.ArrayList;
import java.util.HashMap;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		ArrayList<Integer> list = new ArrayList<>();
		HashMap<Integer, Integer> hashmap = new HashMap<>();
		
		int N = Integer.parseInt(br.readLine());
		
		int average = 0;
		int median = 0;
		int mode = 0;
		int range = 0;
		
		double sum  = 0;
		
		// 값 입력 받고 평균 구하기
		for(int i = 0 ; i < N ; i++) {
			int num = Integer.parseInt(br.readLine());
			sum += num;
			list.add(num);
		}
		average = (int) Math.round((double)sum / N);
		
		// 중앙값을 찾기 위한 오름차순 정렬
		Collections.sort(list);		
		
		// 중앙값
		median = list.get(N / 2);		
		
		// 범위
		int max = Collections.max(list);
		int min = Collections.min(list);
		
		range = max - min;	// 최대값 - 최소값
		
		//최빈값
		for(int n : list) {
			// 숫자가 한번 나올 때마다 +1.
			hashmap.put(n, hashmap.getOrDefault(n, 0) + 1);
		}
		
		// 최빈값 찾는다.
		int value = 0;
		for(int v : hashmap.values()) {
			value = Math.max(value, v);
		}

		// 위에서 사용했던 list를 다시 사용하기 위해 clear 처리
		// 최빈수와 같은 빈도의 수를 list에 삽입
		list.clear();
		for(int key : hashmap.keySet()) {
			if(hashmap.get(key) == value) {
				list.add(key);
			}
		}

		// 최빈수가 2개 이상일 경우 2번째로 작은 값을 뽑아내야 하기 때문에 list 정렬
		Collections.sort(list);

		// 최빈수와 빈도수가 같은 수가 2개 이상인 경우 index 1의 값을 최빈값으로 설정
		// 1개일 경우 그대로 index 0을 최빈값으로 설정(오름차순 정렬을 해줬기 때문에 가능)
		if(list.size() >= 2) {
			mode = list.get(1);
		}
		else {
			mode = list.get(0);
		}
		
		System.out.println(average); 
		System.out.println(median);
		System.out.println(mode); 			 		 
		System.out.println(range); 
	}

}