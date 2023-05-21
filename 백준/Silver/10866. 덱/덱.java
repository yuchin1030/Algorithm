import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Deque;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int num = Integer.parseInt(br.readLine());
		Deque<Integer> deque = new LinkedList<Integer>();
		
		for(int i = 0 ; i < num ; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine(), " ");	// 공백을 구분자로 읽어들임
			int x;
			
			switch(st.nextToken()) {	// 명령어
			case "push_front":
				x = Integer.parseInt(st.nextToken());	// 공백으로 분리된 값(숫자)을 x에 넣어줌
				deque.offerFirst(x);
				break;
			case "push_back":
				x = Integer.parseInt(st.nextToken());
				deque.offerLast(x);
				break;
			case "pop_front":
				System.out.println(!deque.isEmpty() ? deque.pollFirst() : -1);
				break;
			case "pop_back":
				System.out.println(!deque.isEmpty() ? deque.pollLast() : -1);
				break;
			case "size":
				System.out.println(deque.size());
				break;
			case "empty":
				System.out.println(deque.isEmpty() ? 1 : 0);
				break;
			case "front":
				System.out.println(!deque.isEmpty() ? deque.peekFirst() : -1);
				break;
			case "back":
				System.out.println(!deque.isEmpty() ? deque.peekLast() : -1);
				break;
			}
		}
	}
	

}
