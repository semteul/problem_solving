#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int start, end;
        cin >> start >> end;
        v.emplace_back(end, start);
    }

    // 끝나는 시간을 기준으로 오름차순 정렬
    sort(v.begin(), v.end()); 

    int last = -1;
    int count = 0;
    
    for(int i=0;i<v.size();i++) {
        int end = v[i].first;
        int start = v[i].second;

        if(last == end) {// 이미 끝나는 경우가 같은 수를 하나 카운트 했을 경우
            if(start == end){
                count++;
            }
            continue;
        }

        // 시작하는게 last보다 뒤일 때
        if(last <= start){
            count++;
            last = end;
        }
    }

    cout << count;
    return 0;
}