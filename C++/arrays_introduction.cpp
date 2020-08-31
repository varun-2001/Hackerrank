// https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int main()
{
    int n, a[MAX];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=n; i>0; i--){
        cout<<a[i];
    }
    return 0;
}
