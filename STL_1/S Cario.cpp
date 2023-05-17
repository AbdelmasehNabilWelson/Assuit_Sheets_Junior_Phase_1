#include "bits/stdc++.h"
 
using namespace std;
 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
int main() {
    fast();
 
    short test;
    cin >> test;
 
    while (test--) {
        short size;
        cin >> size;
 
        short pointer = 1;
        stack <short> sideStreet;
        sideStreet.push(1003);
 
        short pos;
        while (size--) {
            cin >> pos;
 
            if (pos == pointer) {
                ++pointer;
            } else {
                sideStreet.push(pos);
            }
 
            while (sideStreet.top() == pointer) {
                sideStreet.pop();
                ++pointer;
            }
 
            // cout << "size = " << sideStreet.size() << " pointer = " << pointer << '\n';
        }
 
 
        // cout << sideStreet.size() << '\n';
 
        if (sideStreet.size() == 1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}