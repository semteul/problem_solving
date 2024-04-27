#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

using namespace std;

int main(void) {
    map<string, int> m; // map은 기본적으로 key를 기준으로 오름차순으로 정렬된다.
    int count = 0;
    string s;

    while(getline(cin, s)){
        if(m.find(s) == m.end()){ 
            m.insert({s,1}); // 키를 새로 추가
        } else {
            m[s] += 1; // 키를 업데이트
        }
        count++;
    }

    ostringstream oss;
    oss << fixed << setprecision(4);
    for(auto it = m.begin(); it != m.end(); it++) {
        oss << it->first << " ";
        oss << (100.0*((float)it->second)/((float)count));
        oss << '\n';
    }
    cout << oss.str();
    
    return 0;
}