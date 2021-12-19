package string;

import java.util.Scanner;

public class str {

	public static void main(String[] args) {
		 String str;
	      int N=0;
	      Scanner in = new Scanner(System.in);
	      str  = in.nextLine();
	      N = str.length();
	      for(int i=0; i<str.length(); i++)
	      {
	    	  for(int j=i+1; j<str.length(); j++)
	    	  {
	    		  if(str.charAt(j)>str.charAt(i))
	    		  {
	    			  N++;
	    		  }
	    	  }
	      }
	      System.out.println( N * (N + 1) / 2);
in.close();
}
}