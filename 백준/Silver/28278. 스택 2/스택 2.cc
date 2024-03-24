#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    string console; 

    for(int i=0;i<n;i++){
        int op;
        cin >> op;
        switch(op){
            case 1:
                int opr;
                cin >> opr;
                s.push(opr);
                break;
            case 2:
                if(s.empty()){
                    console += "-1\n";
                } else {
                    console += to_string(s.top())+"\n";
                    s.pop();
                } 
                break;
            case 3:
                console += to_string(s.size())+"\n";
                break;
            case 4:
                s.empty() ? console += '1' : console+='0';
                console += "\n";
                break;
            case 5:s.empty() ?console += "-1" : console+=to_string(s.top());
                console += "\n";
                break;
            default:
                break;
        }
    }

    std::cout << console;
    return 0;
}