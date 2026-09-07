#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word[100];
    int n = 0;
    string temp = "";

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || i == s.length()) {
            word[n] = temp;
            n++;
            temp = "";
        }
        else {
            temp += s[i];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << word[i] << " ";
    }

    return 0;
}