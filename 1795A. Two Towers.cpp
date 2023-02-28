//Two Towers
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while(test--) {
        int n1 , n2;
        cin >> n1 >> n2;

        string tower1;
        string tower2;

        cin >> tower1 >> tower2;

        int c1=0;
        int c2=0;
        for(int i=0 ; i<n1-1 ; i++) {
            if(tower1[i]==tower1[i+1]) {
                c1++;
            }
        }
        for(int i=0 ; i<n2-1 ; i++) {
            if(tower2[i]==tower2[i+1]) {
                c2++;
            }
        }

        if(c1 == 0 && c2 == 0) {
            cout << "YES" << endl;
        }

        else if (c1 > 0 && c2 > 0) {
            cout << "NO" << endl;
        }

        else if (c1 > 1 || c2 > 1) {
            cout << "NO" << endl;
        }

        else {
            if(tower1[n1-1] != tower2[n2-1]) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }

        }

    }
}