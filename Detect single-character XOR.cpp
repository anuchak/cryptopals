// Now that the party is jumping ;)

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream infile("4.txt");
	string line;
	while(getline(infile, line))
	{
		//cout << line << "\n";
		int i = 1;
		while(i < 256)
		{
			string s;
			for(int j = 0; j < line.size(); j += 2)
			{
				int t = 0;
				t += (line[j] <= '9') ? (line[j] - '0')*16 : (line[j] - 'a' + 10) * 16;
				t += (line[j+1] <= '9') ? (line[j+1] - '0') : (line[j+1] - 'a' + 10);
				int m = t ^ i;
				if( (char)m != ' ' && (char)m != '\'' && (char)m != '\n' && ((m >= 0 && m < 65) || (m > 90 && m < 97) || (m > 122)))
				break;
				s.push_back(m);
				if(s.size() > 15)
				{
				   cout << line << " " << (char)i << " " << s << "\n";
				}
			}
			i++;
        }
    }
	return 0;
}
