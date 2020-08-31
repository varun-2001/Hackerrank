// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    if (n<=9){
        cout<<arr[n-1];
    }
    else
    cout<<"Greater than 9";
}
