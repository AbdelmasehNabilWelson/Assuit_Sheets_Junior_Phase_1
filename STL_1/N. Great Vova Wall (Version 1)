#include "bits/stdc++.h"
 
using namespace std;
 
bool even(long long & num) {
    if (num % 2 == 0)
        return true;
    else
        return false;
}
 
int main() {
    int size;
    cin >> size;
 
    stack <char> completed; 
    completed.push('2');
    long long num;
    while (size--) {
        cin >> num;
 
        if (completed.top() == '1' && !even(num)) {
            completed.pop();
        } else if (completed.top() == '0' && even(num)) {
            completed.pop();
        } else if (even(num)) {
            completed.push('0');
        } else {
            completed.push('1');
        }
    }
 
    if (completed.size() <= 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}