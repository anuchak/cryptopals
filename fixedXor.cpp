#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a,b;
  a = "1c0111001f010100061a024b53535009181c";
  b = "686974207468652062756c6c277320657965";
  for(int i = 0; i < a.size(); i++)
  {
    int j = (a[i] <= '9') ? (a[i] - '0') : (a[i] - 'a' + 10);
    int k = (b[i] <= '9') ? (b[i] - '0') : (b[i] - 'a' + 10);
    int m = j ^ k;
    cout << m;
  }
  return 0;
}
