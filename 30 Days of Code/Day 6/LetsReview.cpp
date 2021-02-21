#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    string s;
    cin>>T;
    int index=0;
    for (int i=0;i<T;i++){
        cin>>s;
        for (index=0;index<s.length();index++){
            if (index%2==0) cout<<s[index];
        }
        cout<<" ";
        for (index=0;index<s.length();index++){
            if(index%2!=0) cout<<s[index];
        }
        cout<<"\n";
    }
    return 0;
}
