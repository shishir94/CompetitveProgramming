#include <bits/stdc++.h>
using namespace std;
string replace(string s)
{
    int l = s.length();
    for (int i = 0; i < l; i++) {
        if (s[i] == '1')
            s[i] = 'a';
        else if (s[i] == '2')
            s[i] = 'b';
        else if (s[i] == '3')
            s[i] = 'c';
        else if (s[i] == '4')
            s[i] = 'd';
        else if (s[i] == '5')
            s[i] = 'e';
        else if (s[i] == '6')
            s[i] = 'f';
        else if (s[i] == '7')
            s[i] = 'g';
        else if (s[i] == '8')
            s[i] = 'h';
        else if (s[i] == '9')
            s[i] = 'i';
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    cout << replace(s)<<endl;
    return 0;
}