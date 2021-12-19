package Number5;

import java.util.Scanner;
import java.util.HashMap;

public class Number5 {

	public static void main(String[] args) {
		System.out.println("Enter The Given String:  ");
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();

		HashMap<Character, Integer> chcount = new HashMap<Character, Integer>();

		Character ch;
		int not =0;

		for (int i = 0; i < str.length(); i++) {

			ch = str.charAt(i);

			if (chcount.containsKey(ch)) {

				chcount.put(ch, chcount.get(ch) + 1);

			} else {

				chcount.put(ch, 1);
			}
		}

		for (int j = 0; j < str.length(); j++) {

			ch = str.charAt(j);

			if (chcount.get(ch) == 1) {
				System.out.println("First non-repeated character in string is: " + ch);
				break;
			}
			not++;
		}
		if (not == str.length()) {

			System.out.println("No Repeated Character Found");

		}
in.close();
	}
}
