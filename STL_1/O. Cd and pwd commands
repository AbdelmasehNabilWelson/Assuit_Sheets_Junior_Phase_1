#include "bits/stdc++.h"
 
 
using namespace std;
 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
vector <string> splitSlash(string path) {
    vector <string> names;
    string word = "";
    for (int i = 0; i < path.size(); ++i) {
        if (path[i] == '/') {
            if (word != "") {
                names.push_back(word);
                word = "";
            }
            continue;
        } else {
            word += path[i];
        }
    }
    if (word != "") {
        names.push_back(word);
        word = "";
    }
    return names;
}
 
int main() {
    short size;
    cin >> size;
    
 
    vector <string> dirPath(4000);
    unsigned short pos = 0;
 
    string command;
    while (size--) {
        cin >> command;
        if (command == "pwd") {
 
            if (pos == 0) {
                cout << '/' << '\n';
            } else {
                for (int i = 0; i < pos; ++i) {
                    cout << '/' <<  dirPath[i];
                }
                cout << '/' << '\n';
            }
            
 
        } else if (command == "cd") {
            string path;
            cin >> path;
            
            vector <string> names = splitSlash(path);
 
            if (path[0] == '/')
                pos = 0;
            
            for (int i = 0; i < names.size(); ++i) {
                if (names[i] == "..") {
                    pos--;
                } else {
                    dirPath[pos] = names[i];
                    pos++;
                    // cout << pos << endl;
                }
            } 
            
        }
    }
}