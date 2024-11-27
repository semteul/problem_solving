#include <iostream>
#include <algorithm>

using namespace std;

string d[1000];

int main() {
    cin >> d[0];
    int len = d[0].length();
    for(int i=1;i<len;i++){
        d[i] = d[0].substr(i,len-i);
    }

    sort(d,d+len);

    for(int i=0;i<len;i++){
        cout << d[i] << endl;
    }

    return 0;
}