// https://www.hackerrank.com/challenges/java-if-else/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
import java.util.*;

public class if_else {
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        if (N%2==0){
            if(N>=2 && N<=5){
                System.out.println("Not Weird");
            }
            if (N>=6 && N<=20){
                System.out.println("Weird");
            }
            if (N>20){
                System.out.println("Not Weird");
            }
        }
        else{
            System.out.println("Weird");
        }
        scanner.close();
    }
}
