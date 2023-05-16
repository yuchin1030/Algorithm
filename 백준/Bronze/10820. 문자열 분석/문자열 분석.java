import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		//StringBuilder sb = new StringBuilder();
		
		while(scan.hasNextLine()) {
			String str = scan.nextLine();
			
			int lower = 0;
			int upper = 0;
			int num = 0;
			int space = 0;
			
			for (int i = 0; i< str.length(); i++) {
				char ch = str.charAt(i);
				
				if (ch >= 'a' && ch <= 'z')
					lower++;
				else if (ch >= 'A' && ch <= 'Z')
					upper++;
				else if (ch >= '0' && ch <= '9')
					num++;
				else if (ch == ' ')
					space++;
			}
			
			System.out.println(lower + " " + upper + " " + num + " " + space);
			//sb.append(lower + " " + upper + " " + num + " " + space + "\n");
		}
		
		//System.out.println(sb);
		scan.close();
	}
}
