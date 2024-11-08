#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, ns, p;
    cin >> n >> ns >> p;

    if(p==0) {
        cout << -1;
        return 0;
    }

    if(n==0){
        cout << 1;
        return 0;
    }
    vector<int> v;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }


    auto it = v.begin();
    while(it != v.end()) {
        if(ns > *it) {
            break;
        }
        it++;
    }
    v.insert(it,ns);
    
    int c=1;
    for(int i=0;i<v.size();i++) {
        if(i>0 && v[i-1] > v[i]) {
            c = i+1;
        }

        //cout << i << " : " << v[i] << " : " << ns << endl;
        if(v[i] == ns) {
            if(i == v.size()-1 || v[i+1] < ns) {
                if(i <= p-1)
                    cout << c;
                else
                    cout << -1;
                return 0;
            }
        }
    }

    return 0;
}