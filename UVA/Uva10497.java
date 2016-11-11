import java.io.*;
import java.util.*;
import java.math.*;
class Uva10497 {
	public static void main(String[] args)
	{
		Scanner cin=new Scanner(System.in);
		int n;
		BigInteger a[]=new BigInteger[801];
		a[1]=BigInteger.ZERO;
		a[2]=BigInteger.ONE;
		for(n=3;n<801;n++)
			a[n]=(a[n-1].add(a[n-2])).multiply(BigInteger.valueOf(n-1));
		while(cin.hasNext())
		{
			n=cin.nextInt();
			if(n==-1) break;
			System.out.println(a[n]);
		}
	}
}
