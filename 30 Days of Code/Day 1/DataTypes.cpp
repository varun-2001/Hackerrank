#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    int n;
    double doubl;
    string strin;
    string s = "HackerRank ";
    cin>>n>>doubl;
    cin.get();
    getline(cin,strin);
    cout<<i+n<<endl;
   cout<< std::fixed <<std::setprecision(1)<< d+doubl << endl;
    cout<<s+strin;

    return 0;
}