#include <bits/stdc++.h>
using namespace std;
int main() {
string p;
cin >> p;
char f = '?', s = '?';
for (auto &i : p) {
if (f == '?' || i > f) {
s = f;
f = i;
} else if (i > s) {
s = i;
}
}
cout << s;
}