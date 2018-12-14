#include <bits/stdc++.h>
using namespace std;

void ins(int n, vector <int> &b)
{
  int a[4];
  for(int i=0;i<4;i++)
  {
     a[3-i] = (n%2);
     n = n/2;
  }
  for(int i=0;i<4;i++)
  {
    b.push_back(a[i]);
  }
}

int main()
{
  string a;
  cin >> a;
  vector <int> b;
  for(int i = 0; i < a.size(); i++)
  {
     int n = 0;
     if(a[i] >= 'a' && a[i] <= 'f')
     n=a[i]-'a'+10;
     else
     n=a[i]-'0';
     ins(n,b);
  }
  if(b.size()%3)
  {
    int k = b.size()%3;
    b.push_back(0);
    b.push_back(0);
    if(k == 2) {
    b.push_back(0);
    b.push_back(0);
    }
  }
  
  //for(int i = 0; i < b.size(); i++)
  //cout<<b[i];
  //cout<<endl;
  
  for(int i = 0; i < b.size(); i+=6)
  {
    int num=0;
    int p = 1;
    for(int j = i+5; i <= j; j--)
    {
      num = num + p*b[j];
      p*=2;
    }
    if(num < 26)
    {
      int t = 65+num;
      cout<<(char)t;
    }
    else if(num > 25 && num < 52)
    {
      int t = 71+num;
      cout<<(char)t;
    }
    else if(num > 51 && num < 62)
    {
      int t = num-4;
      cout<<(char)t;
    }
    else if(num==62)
    cout<<"+";
    else
    cout<<"/";
  }
  cout<<endl;
  return 0;
}
