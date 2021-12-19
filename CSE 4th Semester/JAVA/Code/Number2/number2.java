package Number2;

import java.util.Scanner;

public class number2 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.print("Input an alphabet: ");
		String ch = in.next();
		if (ch.charAt(0) == 'A' || ch.charAt(0) == 'a' || ch.charAt(0) == 'E' || ch.charAt(0) == 'e'
				|| ch.charAt(0) == 'I' || ch.charAt(0) == 'i' || ch.charAt(0) == 'O' || ch.charAt(0) == 'o'
				|| ch.charAt(0) == 'U' || ch.charAt(0) == 'u') {
			System.out.println("Input letter is Volwel");
		} else {

			if (ch.length() > 1) {
				System.out.println("Error!! String Length is More Than 1");
			} else if ((ch.charAt(0) >= 'a' && ch.charAt(0) <= 'z') || (ch.charAt(0) >= 'A' && ch.charAt(0) <= 'Z')) {
				System.out.println("Input letter is Consonent");
			} else {
				System.out.println("Input Error! Not an Alphabet.");
			}

		}
		in.close();
	}
}
