#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a[1000];

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int mem[1000];
    int mem2[1000];

    for(int i=0;i<n;i++) {
        mem[i] = 1;
        mem2[i] = i;
        for(int j=0;j<i;j++) {
            if(a[j] < a[i] && mem[i] < mem[j]+1){
                mem[i] = mem[j]+1;
                mem2[i] = j;
            }
        }
    }

    int max = 1;
    int max_i = 0;
    for(int i=0;i<n;i++){
        if(max < mem[i]){
            max = mem[i];
            max_i = i;
        }
    }
    cout << max << endl;
    string max_values = "";
    
    for(int i=0;i<max;i++) {
        max_values = to_string(a[max_i]) + " " + max_values;
        max_i = mem2[max_i];
    }

    cout << max_values;   
    return 0;
}