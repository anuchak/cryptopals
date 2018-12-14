#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string a,b;
  cin>>a>>b;
  for(int i = 0; i < a.size(); i++)
  {
    int f,s;
    if(a[i] >= 'a' && a[i] <= 'f')
    {
      f = a[i]-'a'+10;
    }
    else
      f = a[i] - '0';
    if(b[i] >= 'a' && b[i] <= 'f')
    {
      s = b[i]-'a'+10;
    }
    else
      s = b[i] - '0';
    int res = f^s;
    cout << hex << res;
  }
  cout<<endl;
}
