// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for (i=a; i<=b;i++){
        if(i<=9)
        cout<<arr[i-1]<<endl;
        else if(i%2==0)
        cout<<"even\n";
        else
        cout<<"odd\n";
    }
}