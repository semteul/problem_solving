#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main(void) {
    int n,m;
    int a;
    int b;
    set<int> s;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        s.insert(a);
    }

    ostringstream oss;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> b;
        if(s.find(b) != s.end()){
            oss << 1 << "\n";
        } else {
            oss << 0 << "\n";
        }
    }

    cout << oss.str() << endl;
    return 0;
}