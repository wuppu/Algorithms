#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 101;
int n, k;
int matrix[MAX];
int cache[10001];
int solution()
{
    cache[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = matrix[i]; j <= k; j++)
            cache[j] += cache[j - matrix[i]];
    return cache[k];
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> matrix[i];

    cout << solution() << endl;
    return 0;
}