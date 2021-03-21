#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int dday, rday, dmonth, rmonth, dyear, ryear;
    int fine=0;
    cin>>rday>>rmonth>>ryear;
    cin>>dday>>dmonth>>dyear;

    if (ryear>dyear) fine=10000;
    else if (ryear==dyear){
        if (rmonth>dmonth) fine=500*(rmonth-dmonth);
        else if (rmonth==dmonth && rday>dday) fine=15*(rday-dday);
    }
    cout<<fine;
    return 0;
}
