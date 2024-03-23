#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(void) {
    int i=1; 
    while(true) {
        string a;
        getline(cin,a);
        if(a[0] == '-')
            break;
        
        int result = 0;
        int count = 0;

        for(char c : a) {
            if(c == '}'){
                if(count == 0){
                    result++;
                    count++;
                } else {
                    count--;
                }
            } else {
                count++;
            }
        }

        cout <<i++<<". "<<result+(count)/2 << endl;
    }
    return 0;
}