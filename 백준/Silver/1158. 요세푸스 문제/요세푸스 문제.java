import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

/* .add()와 .remove()는 큐가 꽉 찼거나 비어있을 때 사용하면 Exception 오류를 발생시킨다

   .offer()은 큐가 비어있을 때 false를 .poll()은 큐가 비어있을 때 null을 반환하기 때문에 오류에서 좀 더 자유롭다

*/
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(st.nextToken());	// 공백 단위로 입력 데이터를 받기 위함
		int K = Integer.parseInt(st.nextToken());
		 
		Queue<Integer> q = new LinkedList<>();
		 
		// 1~N까지 N명의 사람 넣기
		for (int i = 1; i <= N; i++) {
			q.offer(i);
		}
		
		sb.append("<");
		
		while (q.size() != 1) {	// 큐에 값이 하나 남을 때까지 반복
			for (int i = 1; i < K; i++) {	// k번째가 될 때까지(k-1까지) 값들을 맨 뒤로 보냄
				q.offer(q.poll());
			}
			sb.append(q.poll()).append(", ");	// K번째 값 제거
		}
		// 마지막 값(콤마 없이 출력)
		sb.append(q.poll()).append(">");
		System.out.println(sb);
		
	}
}