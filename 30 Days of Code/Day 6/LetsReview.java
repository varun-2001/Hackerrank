import java.io.*;
import java.util.*;

public class LetsReview {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    int T;
    String s;
    Scanner scan=new Scanner(System.in);
    T=scan.nextInt();
    scan.nextLine();
    int index;
    for (int i=0;i<T;i++){
        s=scan.nextLine();
        for (index=0;index<s.length();index++){
            if (index%2==0) System.out.print(s.charAt(index));
        }
        System.out.print(" ");
        for (index=0;index<s.length();index++){
            if(index%2!=0) System.out.print(s.charAt(index));
        }
        System.out.println();
    }
    scan.close();
    }
}