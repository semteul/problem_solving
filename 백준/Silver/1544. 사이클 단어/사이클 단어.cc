#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    string s;
    string f[50]; // founded
    int count = 0;

    for(int i=0;i<n;i++) {
        cin >> s;
        bool found = false;
        for(string cmp : f) {
            int length = cmp.length();
            if(length != s.length())
                continue;
            for(int i=0;i<length;i++) {
                rotate(s.begin(), s.begin() + 1, s.end());
                if(cmp == s)
                    found = true;
            }
        }

        if(!found) {
            f[count] = s;
            count++;
        }
    }
    cout << count;


    return 0;
}