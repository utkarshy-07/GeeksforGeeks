#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    // code here
    // method 1
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='a')
    // cout << "true" << endl;
    // else cout << "false" << endl;
    // method 2
    string vowels = "aeiouAEIOU";
    if (vowels.find(ch) != string::npos)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}