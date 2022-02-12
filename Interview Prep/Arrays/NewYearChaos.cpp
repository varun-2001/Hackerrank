#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumBribes' function below.
 *
 * The function accepts INTEGER_ARRAY q as parameter.
 */
// 1 2 3 4 5

void minimumBribes(vector<int> q) {
    int bribe =0;
    for (int i=q.size()-1;i>=0;i--){
        if (q[i]!=i+1){
            if (i-1>=0 && q[i-1]==i+1){
                bribe++;
                q[i-1]=q[i];
                q[i]=i+1;
            }
            else if (i-2>=0 && q[i-2]==i+1){
                bribe+=2;
                q[i-2]=q[i-1];
                q[i-1]=q[i];
                q[i]=i+1;
            }
            else {
                cout<<"Too chaotic\n";
                return;
            }
        }
    }
    cout<<bribe;
}


int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split(rtrim(q_temp_temp));

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}
