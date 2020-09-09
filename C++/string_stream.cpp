// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream sti(str);
    vector<int> output;
    int temp;
    char ch;
    while (sti>>temp)
    // Provide proper checks here for temp like if empty
    // Also strip down symbols like ! , . , ? , etc.
    // Reads line till null character or space
    {
        output.push_back(temp);
        sti>>ch;
    }
    return output;


}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}