#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    char g;
    cin >> n >> g;
    switch(g) {
        case 'Y':
            g = 1;
            break;
        case 'F':
            g = 2;
            break;
        case 'O':
            g = 3;
            break;
    }

    
    string name;
    set<string> s;
    int count =0 ;
    for(int i=0;i<n;i++) {
        cin >> name;

        if(s.count(name) == 0) {
            count++;
            s.insert(name);
        }
    }

    count /= g;
    cout << count;
    return 0;
}