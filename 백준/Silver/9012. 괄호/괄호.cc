#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string str;
        cin >> str;
        stack<int> s;
        bool y=true;
        for(auto c : str) {
            if(c== '(') {
                s.push('(');
            } else if(c == ')') {
                if(s.empty()) {
                    y=false;                   
                    break;
                } else {
                    s.pop();
                }
            } else {
                y=false;
                break;
            }
        }
        if(!s.empty())
            y=false;
        if(y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}