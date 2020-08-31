import java.util.*;

public class usingScanner{
    public static void main(String[] args) {
        // Creates a scanner to read the input
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        // Necessary to close scanner everytime
        scan.close();
        // Print output
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
       
    }
}