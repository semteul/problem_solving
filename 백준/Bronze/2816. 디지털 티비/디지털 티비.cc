#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i1,i2;
    string str;
    cin >>n;
    
    for(int i=0;i<n;i++){
        cin >> str;
        if (str=="KBS1"){
            i1=i;
        }
        if (str=="KBS2"){
            i2=i;
        }
    }
    
    if(i1<i2){
        for(int i=0;i<i1;i++){
            cout<<1;
        }
        for(int i=0;i<i1;i++){
            cout<<4;
        }
        for(int i=0;i<i2;i++){
            cout<<1;
        }
        for(int i=1;i<i2;i++){
            cout<<4;
        }
    }else{
        for(int i=0;i<i2;i++){
            cout<<1;
        }
        for(int i=0;i<i2;i++){
            cout<<4;
        }
        for(int i=0;i<i1;i++){
            cout<<1;
        }
        for(int i=1;i<i1;i++){
            cout<<4;
        }
        cout<<4;
    }
    return 0;
}