package Number6;

import java.util.StringTokenizer;
import java.util.Scanner;

public class Number6 {

	public static void main(String[] args) {

		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the line of number: ");
		String numbers = reader.nextLine();
		StringTokenizer t = new StringTokenizer(numbers);
		int digit=0, sum=0;
		System.out.println("The Entered Numbers are:");
		while(t.hasMoreTokens())
		{
			String str = t.nextToken();
			digit = Integer.parseInt(str);
			System.out.print(digit+", ");
			sum+=digit;
		}
		System.out.println();
		System.out.print("The sum of the numbers are: "+sum);
reader.close();	
	}

}
