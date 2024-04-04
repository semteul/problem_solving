#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Back Trancking으로 출력
void printAll(int now, vector<int> order, int n, int m,string* str){
    order.push_back(now);

    if(order.size() == m) {
        for(auto c : order)
            *str += to_string(c+1) + " ";
        *str += "\n";
        return;
    }
    

    for(int i=0;i<n;i++){
        auto it = find(order.begin(), order.end(), i);
        if(it == order.end()){
            printAll(i, order, n, m, str);
        }
    }

    order.pop_back();
    return;
}

int main(void) {
    int n,m;
    cin >> n >> m;
    
    string* str = new string();

    for(int i=0;i<n;i++){
        vector<int> order(0);
        printAll(i,order,n,m,str);
    }

    cout << *str;

    return 0;
}