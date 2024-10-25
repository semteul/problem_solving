#include <bits/stdc++.h>

using namespace std;

#define lt long long

lt f(lt a) {
    
    lt l=0;
    lt n = to_string(a).length();

    for(lt w=9;w>=0;w--) {
        l = 0;
        if(w == 0) {
            l = 0;
            for(lt i=1;i<=n-1;i++) {
                l = 10*l + 9;
            }   
            return l;
        }
        for(lt i=1;i<=n;i++) {
            l = 10*l + w;
        }
        if( a >= l )
            return l;
    }

    return l;
}

int main(void) {
    lt t;
    cin >> t;
    for(lt j=0;j<t;j++) {
        lt K;
        lt N;

        cin >> N >> K;
        string r;
        lt count = 0;
        
        while(K > 0) {
            lt t = f(K);
            r = r + to_string(t) + " ";
            count++;
            K = K-f(K);
        }

        cout << count << endl;
        cout << r << endl;

    }
    return 0;
}