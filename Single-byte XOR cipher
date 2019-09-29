#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736";
  int i = 1;
  while(i < 256)
  {
	cout << "Case " << (char)i << " -> ";
	for(int j = 0; j < s.size(); j += 2)
	{
		int t = 0;
		t += (s[j] <= '9') ? (s[j] - '0')*16 : (s[j] - 'a' + 10)*16;
		t += (s[j+1] <= '9') ? (s[j+1] - '0') : (s[j+1] - 'a' + 10);
		int m = t ^ i;
		cout << (char)(m);
	}
	cout << "\n";
	i++;
  }
  return 0;
}
