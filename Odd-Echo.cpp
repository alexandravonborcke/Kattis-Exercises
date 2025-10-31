#include <iostream>
/* Problem being solved:
 https://open.kattis.com/problems/oddecho */

void string_echo(int n) {
    int i, j;
    std::string s[n];
    // input of n words
    for (i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    // output of the odd-indexed words
    for (j = 0; j < n; j++) {
        if (j % 2 == 0) {
            std::cout << s[j] << std::endl;
        } else continue;
    }
}


int main() {
    int n;
    std::cin >> n;
    string_echo(n);
}