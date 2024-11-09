#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canHandleWithCapacity(const vector<long long>& weights, int k, long long capacity) {
    int runCount = 1;
    long long currentSum = 0;
    
    for (long long weight : weights) {
        if (currentSum + weight > capacity) {
            runCount++;
            currentSum = 0;
        }
        currentSum += weight;
        
        if (runCount > k) return false;
    }
    return true;
}

long long findMinCapacity(int n, int k, const vector<long long>& weights) {
    long long minCapacity = *max_element(weights.begin(), weights.end());
    long long maxCapacity = accumulate(weights.begin(), weights.end(), 0LL);

    while (minCapacity < maxCapacity) {
        long long midCapacity = (minCapacity + maxCapacity) / 2;
        
        if (canHandleWithCapacity(weights, k, midCapacity)) {
            maxCapacity = midCapacity;
        } else {
            minCapacity = midCapacity + 1;
        }
    }
    
    return minCapacity;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    
    cout << findMinCapacity(n, k, weights) << endl;
    
    return 0;
}
