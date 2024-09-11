#include <bits/stdc++.h>
using namespace std;
int main() {

string s;
cin >> s;
int c = 0;
for (int i = 0; i < (int)s.size(); i ++) {
if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i')
{
c++;
}
}
cout << s.size() - c;
}