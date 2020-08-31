#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int> vec;
    for(int i=0;i<5;i++)
    vec.push_back(i);
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<"\n";
    return 0;
}