#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int days = 0;
    int mx = INT_MIN;  

    for (int i = 0; i <= n - 1; i++) {
      
        if (a[i] > mx && (i == n - 1 || a[i] > a[i + 1])) {
            days++;
        }
        mx = max(mx, a[i]); 
    }

    cout << days << "\n";

    return 0;
}
