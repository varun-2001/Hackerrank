// https://www.hackerrank.com/challenges/30-scope/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int> elements){
        this->elements=elements;
    }
    void computeDifference(){
        int max=0;
        for (int i=0;i<elements.size();i++){
            for (int j=0;j<elements.size();j++){
                int diff=abs(elements[i]-elements[j]);
                if (diff>max) max=diff;
            }
        }
        maximumDifference=max;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}