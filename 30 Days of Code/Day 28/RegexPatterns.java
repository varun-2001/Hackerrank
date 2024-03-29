import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String regexPattern=".+@gmail\\.com$";
        Pattern pattern = Pattern.compile(regexPattern);
        int N = scanner.nextInt();
        ArrayList<String> names =new ArrayList<>();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int NItr = 0; NItr < N; NItr++) {
            String[] firstNameEmailID = scanner.nextLine().split(" ");

            String firstName = firstNameEmailID[0];

            String emailID = firstNameEmailID[1];
            Matcher matcher = pattern.matcher(emailID);
            if (matcher.find()) names.add(firstName);
        }
        Collections.sort(names);
        names.forEach(System.out::println);
        scanner.close();
    }
}
