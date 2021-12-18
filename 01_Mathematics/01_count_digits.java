import java.io.*;
import java.util.*;
import static java.lang.System.out;

class Solution {

	
	static int countDigits(int x)
	{
		int res = 0;
		while(x > 0)
		{
				x = x / 10;
				res++;
		}	
		return res;
	}

	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();

		System.out.println(countDigits(n));

	}
}
