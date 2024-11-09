#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

// i, d 깊이, size 사이즈
int dfs(int i, int d, int size) {
    if(d == size) {
        return i;
    }

    int m = -1;
    int r = 100;
    for(auto c : v) {
        int t = dfs(i*10+c,d+1,size);
        if(m==-1 || abs(n-t) < m){
            r = t;
            m = abs(n-t);
        }
    }
    return r;
}


int main() {
    int m,size;
    string str;
    cin >> str;
    n = stoi(str);
    size = str.size();
    cin >> m;

    int z[10] = {0};
    for(int i=0;i<m;i++) {
        int t;
        cin >> t;
        z[t] = 1;
    }
    for(int i=0;i<10;i++) {
        if(!z[i])
            v.push_back(i);
    }

    int min = abs(n-100);
    if(size > 1){
        int r = dfs(0,0,size-1);
        r = abs(r-n) + size-1;
        if(min > r)
            min = r;
    }
    {
        int r = dfs(0,0,size);
        r = abs(r-n) + size;
        if(min > r)
            min = r;
    } 
    {
        int r = dfs(0,0,size+1);
        r = abs(r-n) + size+1;
        if(min > r)
            min = r;
    } 
    cout << min;
    return 0;
}