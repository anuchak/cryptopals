#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string a,b,c;
  a = "Burning 'em, if you ain't quick and nimble"
       "I go crazy when I hear a cymbal";
  c = "ICE";
  for(int i = 0; i < a.size(); i++)
  {
    if(a[i] == ' ')
    {
      int k = 32;
      int l = c[i%3];
      int m = k^l;
      if ( m > 15)
      cout<<hex<<m;
      else
      cout<<"0"<<hex<<m;
    }
    else
    {
      int k = a[i];
      int l = c[i%3];
      int m = k^l;
      if(m > 15)
      cout<<hex<<m;
      else
      cout<<"0"<<hex<<m;
    }
  }
  cout<<endl;
  return 0;
}
