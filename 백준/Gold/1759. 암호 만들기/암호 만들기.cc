#include <bits/stdc++.h>
using namespace std;

int l,c;
char a[15];
char s[15];

char table[] = {'a','e','i','o','u'};

bool issyllable(char c){
    for(int i=0;i<5;i++) {
        if(table[i]==c)
            return true;
    }
    return false;
}

void bt(int i, int d) {
    s[d-1] = a[i];
    if(d == l) {  
        string str="";
        int constants = 0;
        int syllables = 0;
        for(int j=0;j<d;j++) {
            if(issyllable(s[j]))
                syllables++;
            else
                constants++;
            str += s[j];
        }
        if(syllables >= 1 && constants >= 2)
            cout << str << '\n';
        return;
    }
    for(int j=i+1;j<c;j++) {
        bt(j,d+1);
    }
 }

int main() {
    cin >> l >> c;

    for(int i=0;i<c;i++) {
        cin >> a[i];
    }
    sort(a,a+c);

    for(int i=0;i<=c-l;i++){
        bt(i,1);
    }
    return 0;
}