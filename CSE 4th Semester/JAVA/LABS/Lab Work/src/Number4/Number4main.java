package Number4;

import java.util.Scanner;

public class Number4main {

	public static void main(String[] args) {
		Scanner reader = new Scanner(System.in);
		System.out.println("Entet Original String: ");
		String str = reader.nextLine();
		System.out.println("Entet Specified sequence of char value: ");
		String src = reader.nextLine();
		System.out.println(str.contains(src));

		reader.close();

	}

}
