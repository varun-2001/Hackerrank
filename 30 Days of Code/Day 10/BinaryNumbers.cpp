#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, max=0,result=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
    cout<<max;

    return 0;
}
