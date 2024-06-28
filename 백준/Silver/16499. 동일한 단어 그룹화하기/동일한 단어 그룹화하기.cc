#include <iostream>
#include <string>
#include <unordered_set>

#define SIZE 256

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int count = 0;
    int dict[101][SIZE] = {0}; 

    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        int word[SIZE] = {0};

        for(char c : s) {
            word[c]++;
        }

        bool found = false; // 이미 존재하면 true
        // dict에 이미 존재하는지 체크
        for(size_t di=0;di<count;di++) {
            for(size_t j=0;j<SIZE;j++) {
                if( dict[di][j] != word[j] )
                    break;
                if(j == SIZE-1) {
                    found = true;
                }
            }
        }

        // 존재하지 않으면 복사 후 count++
        if(!found) {
            for(size_t j=0;j<SIZE;j++){
                dict[count][j] = word[j];
            }
            count++;
        }
    }
    
    cout << count;
    return 0;
}