#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        
        bool hit = false, exists = false;
        for (int i = 0; i < R - r; i++) {
            for (int j = 0; j < C - c; j++) {
                if (G[i].substr(j, c) == P[0]) {
                    for (int k = 1; k < r; k++) {
                        if (G[i + k].substr(j, c) != P[k]) {
                            hit = true;
                            break;
                        }
                    }
                    if (!hit) exists = true;
                    hit = false;
                }
                if (exists) break;
            }
            if (exists) break;
        }
        if (exists) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}