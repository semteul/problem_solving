#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> h(9);
    for(int i=0;i<9;i++){
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            int sum=0;
            for(auto a : h){
                if(a == h[i] || a == h[j])
                    continue;
                sum += a;
            }
            if(sum == 100){
                for(auto a : h){
                    if(a == h[i] || a == h[j])
                        continue;
                    cout << a << endl;
                }
                return 0;
            }
        }
    }

    return 0;
}