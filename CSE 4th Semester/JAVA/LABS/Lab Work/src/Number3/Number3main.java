package Number3;

import java.util.Scanner;

public class Number3main {
	public static void main(String[] args) {
		int size, i;
		System.out.print("Enter the size of array: ");
		Scanner reader = new Scanner(System.in);
		size = reader.nextInt();
		int[] array = new int[size];
		System.out.print("Enter the " + size + " Elements of the array: ");
		for (i = 0; i < size; i++) {
			array[i] = reader.nextInt();
		}
		int search;
		System.out.print("Enter The searched element: ");
		search = reader.nextInt();
		for (i = 0; i < size; i++) {
			if (search == array[i]) {
				System.out.println("Index position of " + search + " is: " + i);
				break;
			}
		}
		if (i == size) {
			System.out.println("Element Not Found!");
		}
		reader.close();
	}

}
