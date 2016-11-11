import java.util.*;
import java.math.*;
class Uva11448 {
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		BigInteger x,y;
		int c,d;
		
		c=input.nextInt();
		d=0;
		
		while(c>d)
		{
			x=input.nextBigInteger();
			y=input.nextBigInteger();
			System.out.println(x.subtract(y));
			d++;
		}
	}

}
