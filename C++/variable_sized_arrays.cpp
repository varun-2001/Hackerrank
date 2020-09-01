// https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int num, queries;
    cin >> num >> queries;
    vector<int> arr[num];

    for (int i = 0; i < num; i++)
    {
        int k;
        cin >> k;
        int e;

        for (int j = 0; j < k; j++)
        {
            cin>>e;
            arr[i].push_back(e);
        }
    }
    
    int r,s;
    for (int i=0;i<queries;i++){
        cin>>r>>s;
        cout<<arr[r][s]<<endl;
    }

    return 0;
}