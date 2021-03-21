import java.io.*;
import java.util.*;

public class NestedLogic {

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int rday=s.nextInt();
        int rmonth =s.nextInt();
        int ryear=s.nextInt();
        int dday=s.nextInt();
        int dmonth=s.nextInt();
        int dyear =s.nextInt();
        s.close();
        int fine=0;
        if (ryear>dyear) fine=10000;
        else if (ryear==dyear){
            if (rmonth>dmonth) fine=500*(rmonth-dmonth);
            else if (rmonth==dmonth && rday>dday) fine=15*(rday-dday);
        }
        System.out.println(fine);
    }
}