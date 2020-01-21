/**
 * 백준 15650번 - N과 M (2).cpp
 * 
 * TODO:
 * 백트랙킹
 * */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX = 8;

int n, m;
vector<int> v;

void solve(int idx, int cnt) {
    if (cnt == m) {
        for (int a : v)
            cout << a << " ";
        cout << "\n";
        return;
    }

    for (int i = idx; i <= n; i++) {
        v.push_back(i);
        solve(i + 1, cnt + 1);
        v.pop_back();
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    solve(1, 0);

    return 0;
}