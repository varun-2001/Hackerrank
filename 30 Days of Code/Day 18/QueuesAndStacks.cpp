// https://www.hackerrank.com/challenges/30-more-exceptions/problem

#include <iostream>
#include <stack>
#include <queue>
using namespace std;
#define MAX 10000

class Solution {
    //Write your code here
    private:
        stack<char> s;
        queue<char> q;
    
    public:
        char popCharacter(){
            char temp=s.top();
            s.pop();
            return temp;
        }

        void pushCharacter(char ch){
            s.push(ch);
        }

        void enqueueCharacter(char ch){
            q.push(ch);
        }

        char dequeueCharacter(){
            char temp=q.front();
            q.pop();
            return temp;
        }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}