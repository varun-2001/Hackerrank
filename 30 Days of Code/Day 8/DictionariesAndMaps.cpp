#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    string name;
    int number;
    cin>>n;
    map<string, int> phoneBook;
    for (int i=0;i<n;i++){
        cin>>name;
        cin>>phoneBook[name];
    }
    while(cin>>name){
        if(phoneBook.find(name)!=phoneBook.end())
            cout<<name<<"="<<phoneBook[name]<<endl;
        else
            cout<<"Not found"<<endl;

    }
    return 0;
}