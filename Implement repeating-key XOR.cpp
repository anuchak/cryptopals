#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	string encrypt = "Burning 'em, if you ain't quick and nimble\nI go crazy when I hear a cymbal";
	string key = "ICE";
	
	int i = 0;
	
	while(i < encrypt.size())
	{
		for(int j = 0; j < key.size() && i < encrypt.size(); j++)
		{
			int m = (int)encrypt[i++] ^ (int)key[j];
			string s;
			while(m)
			{
				s.push_back(m % 2 + 48);
				m /= 2;
			}
			while(s.size() < 8)
			s.push_back('0');
			reverse(s.begin(), s.end());
			int t = 0;
			cout << encrypt[i-1] << " -> ";
			for(int k = 3; k > -1; k--)
			t += (s[k] - '0') * pow(2, 3-k);
			if(t < 10)
			cout << t;
			else
			cout << (char)(t + 87);
			t = 0;
			for(int k = 7; k > 3; k--)
			t += (s[k] - '0') * pow(2, 7-k);
			if(t < 10)
			cout << t;
			else
			cout << (char)(t + 87);
			cout << "\n";
		}
	}
	
	return 0;
}
