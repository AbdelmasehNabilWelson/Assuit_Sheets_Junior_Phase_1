#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, pointer = 0;
    char type;
    cin >> N;
    long long val;
    vector <long long> stack(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> type;
        if (type == '1') {
            cin >> val;
            if (pointer == 0) {
                stack[pointer] = val;
                pointer++;
            }
            else {
                long long currMax = stack[pointer - 1];
                stack[pointer] = (val > currMax) ? val : currMax;
                pointer++;
            }
        }
        else {
            --pointer;
        }
 
        cout << stack[pointer - 1] << '\n';
    }
 
    return 0;
}