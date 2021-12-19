package Algorithm;

import java.util.Scanner;

public class quicksort {
	Scanner in = new Scanner(System.in);
	int[] a = new int[5];
	void input() {
		for(int i = 0; i<a.length; i++) {
			a[i] = in.nextInt();
		}
	}
	
	int gcd(int i, int j) {
		if(a[i]==0)
		{
			System.out.println(a[i]);
		}
			
		if(a[j]==0)
		{
			System.out.println(a[j]);
		}
		if(a[i]==a[j])
		{
			System.out.println(a[i]);
		}
		if(a[i]>a[j]) {
			
			return gcd(a[i]-a[j], a[j]);
		}else {
			return gcd(a[i], a[j]-a[i]);
		}
		
	}

	
}
