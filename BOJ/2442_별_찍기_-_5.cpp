/**
 * 백준 2442번 - 별 찍기 - 2
 * 
 * */
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) 
            cout << " ";
        for (int j = 0; j < (i + 1) * 2 - 1; j++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}