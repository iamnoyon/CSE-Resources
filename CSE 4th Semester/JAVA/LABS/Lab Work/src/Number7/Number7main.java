package Number7;

import java.util.Scanner;

public class Number7main {

	public static void main(String[] args) {

		Scanner reader = new Scanner(System.in);
		System.out.print("Enter The value of n: ");
		int n = reader.nextInt();
		System.out.println("Enter the "+n+" Strings: ");
		String[] str = new String[n];
		for(int i=0; i<n;i++)
		{
			str[i] = reader.next();
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1; j<n;j++)
			{
				if(str[i].compareTo(str[j])>0)
				{
					String temp = str[i];
					str[i]=str[j];
					str[j]=temp;
				}
			}
		}
		System.out.println("The Sorted list of String is: ");
		for(int i=0; i<n;i++)
		{
			System.out.println(str[i]);
		}
reader.close();
	}

}
