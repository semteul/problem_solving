#include <iostream>
#include <string>

using namespace std;

bool find(string a, string b, int ws)
{
    int al = a.length();
    for(int i=0;i<al;i++) {
        string temp;
        for(int j=0; i + ws*j < al;j++) {
            temp += a[i + ws*j];
            if(temp == b)
                return true; 
        }
    }
    return false;
}

int main(void) 
{
    int n;
    string my, candidate;

    cin >> n;
    cin >> my;

    int result = 0;

    for(int i=0;i<n;i++){
        cin >> candidate;
        for(int ws=1;ws<=100;ws++) {
            if(find(candidate, my, ws)){
                result++;
                break;
            }
        }

    }

    cout << result;
    return 0;

}