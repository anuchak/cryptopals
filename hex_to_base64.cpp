#include <bits/stdc++.h>
using namespace std;

string ret(string s)
{
  string re;
  for(int i = 0; i < s.size(); i++)
  {
    int t = (s[i] <= '9') ? (s[i]-'0') : (s[i] -'a' + 10);
    string ans;    
    int c = 0;
    //cout << t << "\n";
    while(t)
    {
      ans.push_back(t % 2 + 48);
      t /= 2;
      c++;
    }
    while(c < 4)
    {
      ans.push_back('0');
      c++;
    }
    reverse(ans.begin(), ans.end());
    //cout << ans << "\n";
    re.append(ans);
  }
  //cout << re << "\n";
  return re;
}

int main() 
{
  string s = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";

  string bin = ret(s);
  //cout << bin.size() << "\n";
  int rem = 6 - bin.size() % 6;
  if(rem != 6)
  while(rem--)
  bin.push_back('0');
  //cout << bin << "\n";
  for(int i = 0; i < bin.size(); i+=6)
  {
    int val = 0, ind = 5;
    while(ind > -1)
    {
      val += (bin[i+ind] - '0') * pow(2, 5-ind);
      ind--;
    }
    //cout << val << " ";
    if(val < 26)
    {
      cout << (char)(val + 65);
    }
    else if(val < 52)
    {
      cout << (char)(val + 71);
    }
    else
    {
      cout << (char)(val - 4);
    }
    //cout << "\n";
  }
  //cout << "\n";
}
