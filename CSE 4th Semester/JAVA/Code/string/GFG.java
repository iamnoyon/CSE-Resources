package string;

public class GFG {
	static int countNonEmptySubstr(String str) 
    { 
        int n = str.length(); 
        return n * (n + 1) / 2; 
    }

}
