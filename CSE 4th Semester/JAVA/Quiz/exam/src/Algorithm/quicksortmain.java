package Algorithm;

import java.util.Scanner;

public class quicksortmain {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		quicksort ob = new quicksort();
		ob.input();
		System.out.println("Enter the Range: ");
		int i = in.nextInt();
		System.out.println("Enter the Range: ");
		int j = in.nextInt();
		
		int a = ob.gcd(i, j);
		System.out.println(a);

	}

}
