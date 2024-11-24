#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a, b;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        a.push_back({x, i + 1});
        b.push_back({y, i + 1});
    }

    sort(a.rbegin(), a.rend());

    vector<int> top_k;
    for (int i = 0; i < k; ++i) {
        top_k.push_back(a[i].second);
    }

    vector<pair<int, int>> c;
    for (int i : top_k) {
        c.push_back(b[i - 1]);
    }

    sort(c.rbegin(), c.rend());

    cout << c[0].second << endl;

    return 0;
}
