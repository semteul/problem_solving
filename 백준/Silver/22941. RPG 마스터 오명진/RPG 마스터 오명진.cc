#include <bits/stdc++.h>

using namespace std;

#define lt long long

int main() {
    lt ha, aa, hb, ab;
    lt p,s;
    cin >> ha >> aa >> hb >> ab;
    cin >> p >> s;

    
    lt na = ha/ab;
    lt nb = hb/aa;
    if(ha%ab > 0)
        na+=1;
    if(hb%aa > 0)
        nb+=1;

    if(na >= nb) { // 용사의 승리
        lt t = hb-(nb-1)*aa;
        if((t<=p) || aa <= p ) {
            
            hb+=s;
            nb = hb/aa;
            if(hb%aa > 0)
                nb+=1;

            if(na >= nb) {
                printf("Victory!");
            } else {
                printf("gg");
            }
        } else {
            printf("Victory!");
        }
    } else {
        printf("gg");
    }
}