#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
    deque<int> d;
    string s;
    int operand;

    int n;
    cin >> n;

    ostringstream oss;
    for(int i=0;i<n;i++) {
        cin >> s;
        if(s == "push_back") {
            cin >> operand;
            d.push_back(operand);
        } else if(s == "push_front") {
            cin >> operand;
            d.push_front(operand);
        } else if(s == "pop_front") {
            if(d.empty()){
                oss << "-1" << endl;
                continue;
            }
            oss << d.front() << endl;
            d.pop_front();
        } else if(s == "pop_back") {
            if(d.empty()){
                oss << "-1" << endl;
                continue;
            }
            oss << d.back() << endl;
            d.pop_back();
        } else if(s == "size") {
            oss << d.size() << endl;
        } else if(s == "empty") {
            oss << (d.empty()) << endl;
        } else if(s == "front") {
            if(d.empty()){
                oss << "-1" << endl;
                continue;
            }
            oss << d.front() << endl;
        } else if(s == "back") {
            if(d.empty()){
                oss << "-1" << endl;
                continue;
            }
            oss << d.back() << endl;
        }
    }

    cout << oss.str();

    return 0;
}