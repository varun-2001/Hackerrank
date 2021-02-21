import java.util.*;

public class BinaryNumbers {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        int max=0,result=0;
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        while (n>0){
            if (n%2==1){
                result+=1;
                if (result>max)
                    max=result;
            }
            else
                result=0;
            n=n/2;
        }
        System.out.println(max);
        scanner.close();
    }
}