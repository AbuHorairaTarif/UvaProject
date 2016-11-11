import java.io.*;
import java.math.*;

class Uva11830 {
	public static void main(String [] args) throws IOException
	{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		StringBuffer sb = new StringBuffer("");
		while(true)
		{
			String[] str=br.readLine().split(" ");
			if(str[0].equals("0") && str[1].equals("0"))
				break;
			char dit = str[0].charAt(0);
			StringBuilder temp = new StringBuilder("0");
			
			for(int i=0;i<str[1].length();i++)
			{
				if(str[1].charAt(i)!=dit)
					temp.append(str[1].charAt(i));
			}
			sb.append(new BigInteger(temp.toString())).append("\n");
		}
		System.out.print(sb);
	}

}
