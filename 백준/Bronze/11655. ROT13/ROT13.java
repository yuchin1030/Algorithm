import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();
		String str = scan.nextLine();
		
		for (int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			
			if (ch >= 'a' && ch <= 'z') {	// 소문자
				if (ch >= 'n')
					ch -= 13;
				else
					ch += 13;
			} else if (ch >= 'A' && ch <= 'Z') {	// 대문자
				if (ch >= 'N')
					ch -= 13;
				else
					ch +=13;
			}
			sb.append(ch);
		}
		System.out.println(sb);
		
		scan.close();
	}

}