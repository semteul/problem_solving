#include <iostream> 

using namespace std;

int main(void) {
    // two-pointer 풀이

    int n, k;
    cin >> n >> k;

    int max = 0;
    int sum = 0;

    int input[100001];

    for(int i=0;i<n;i++){
        cin >> input[i];
    }

    for(int i=0;i<n;i++){
        if(i<k){
            sum += input[i];
            max = sum;
        } else {
            sum += input[i];
            sum -= input[i-k];
            if(sum > max)
                max = sum;
        }
    }

    cout << max;

    return 0;
}