import java.util.*;
import java.io.*;

public class Main {
	static List<List<Integer>> list;	/* 2차원 인접 리스트 -> 바깥쪽 리스트의 인덱스는 각 노드를 나타내며,
										   내부 리스트는 해당 노드와 인접한 노드들을 저장 */
    static int parent[];	// 각 노드의 부모 노드를 저장하는 배열
    
	public static void main(String[] args) throws IOException {
		 	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        int N = Integer.parseInt(br.readLine());
	        parent = new int[N+1];

	        // 트리의 인접 리스트 구성
	        list = new ArrayList<>();	
	        for(int i = 0; i <= N; i++)
	            list.add(new ArrayList<>());

	        for(int i = 0; i < N - 1; i++){
	            StringTokenizer st = new StringTokenizer(br.readLine());

	            int from = Integer.parseInt(st.nextToken());	// 간선의 출발 노드
	            int to = Integer.parseInt(st.nextToken());		// 간선의 도착 노드
	            
	            // 양방향 간선을 인접 리스트에 추가
	            list.get(from).add(to);
	            list.get(to).add(from);
	        }

	        // 너비 우선 탐색 (BFS) 수행하여 각 노드의 부모 찾기
	        bfs();

	        // 노드 2부터 시작하여 각 노드의 부모 출력
	        for(int i = 2; i<=N; i++)
	            System.out.println(parent[i]);

	    }
		
		/*
		 bfs() 함수는 너비 우선 탐색(BFS) 알고리즘을 구현하여 트리를 순회하고 각 노드의 부모를 결정.
		 루트 노드 1부터 시작하여 큐에 넣고, 큐가 비어질 때까지 반복.
		 각 반복에서 노드를 큐에서 꺼낸 후 해당 노드의 자식을 탐색하며, 
		 부모가 아직 결정되지 않은 자식 노드에 대해 현재 노드를 부모로 지정하고 큐에 넣음. 이 과정을 모든 노드에 대해 수행 
		 */
	    static void bfs(){
	        Queue<Integer> q = new LinkedList<>();
	        q.offer(1);

	        while(!q.isEmpty()){
	            int num = q.poll();

	            // 현재 노드의 자식들을 순회
	            for(int i = 0; i < list.get(num).size(); i++){	// 현재 노드의 자식 노드 개수만큼 반복
	                int next = list.get(num).get(i);

	                // 자식의 부모가 아직 결정되지 않은 경우 현재 노드를 부모로 지정하고 큐에 넣음
	                if(parent[next] == 0){
	                    parent[next] = num;
	                    q.offer(next);
	                }
	            }
	        }
	    }
	
}