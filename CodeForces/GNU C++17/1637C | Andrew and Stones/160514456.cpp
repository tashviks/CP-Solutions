#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
 
    if (*max_element(a.begin() + 1, a.end() - 1) == 1 || (n == 3 && a[1] % 2 == 1)) {
        cout << "-1\n";
        return;
    }
 
    long long answer = 0;
    for (int i = 1; i < n - 1; i++)
        answer += (a[i] + 1) / 2;
 
    cout << answer << '\n';
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--)
        solve();
}