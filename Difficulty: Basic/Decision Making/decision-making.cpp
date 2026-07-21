#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // code here
    if(n == m){
        cout << "equal" << endl;
    } else if(n < m){
        cout << "less" << endl;
    } else{
        cout << "greater" << endl;
    }
    return 0;
}