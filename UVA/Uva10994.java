
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Uva10994 {

    public static void main(String[] args) throws IOException {

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringBuffer sb = new StringBuffer("");
        while (true) {
            String[] str = br.readLine().split(" ");
            BigInteger p = new BigInteger(str[0]);
            BigInteger q = new BigInteger(str[1]);
            if (p.compareTo(BigInteger.ZERO) < 0 && q.compareTo(BigInteger.ZERO) < 0) {
                break;
            }
            BigInteger ans = func(q).subtract(func(p.subtract(BigInteger.ONE)));
            sb.append(ans).append("\n");

        }
        System.out.print(sb);
    }

    static BigInteger func(BigInteger x) {
        if (x.compareTo(BigInteger.ZERO) <= 0) {
            return BigInteger.ZERO;
        }
        BigInteger rem = x.mod(BigInteger.valueOf(10));
        BigInteger mul = x.divide(BigInteger.valueOf(10));
        BigInteger bg1 = mul.multiply(BigInteger.valueOf(45));
        BigInteger bg2 = ((rem.multiply(rem)).add(rem)).divide(BigInteger.valueOf(2));
        return bg1.add(bg2).add(func(mul));
    }
}