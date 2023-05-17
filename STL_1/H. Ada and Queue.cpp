#include "bits/stdc++.h"

using namespace std;
int main() {
    int opeNum;
    cin >> opeNum;

    string fun;
    short number;
    deque <short> adaToDoList;
    while (opeNum--) {
        cin >> fun;
        if (fun == "toFront") {
            cin >> number;
            adaToDoList.push_front(number);
        } else if (fun == "back") {
            if (adaToDoList.empty()) {
                cout << "No job for Ada?" << endl;
                continue;
            }

            cout << adaToDoList.back() << endl;
            adaToDoList.pop_back();

        } else if (fun == "front") {
            if (adaToDoList.empty()) {
                cout << "No job for Ada?" << endl;
                continue;
            }
            cout << adaToDoList.front() << endl;
            adaToDoList.pop_front();
        } else if (fun == "reverse") {
            reverse(adaToDoList.begin(), adaToDoList.end());
        } else if (fun == "push_back") {
            cin >> number;
            adaToDoList.push_back(number);
        }
    }
}