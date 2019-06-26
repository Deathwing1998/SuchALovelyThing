#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	string s;
	char gl[] = { 'a' ,'e' ,'y' ,'u' ,'i' ,'o' };
	getline(cin, s);
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'A')
			s[p] = gl[0];
		if (s[p] == 'E')
			s[p] = gl[1];
		if (s[p] == 'Y')
			s[p] = gl[2];
		if (s[p] == 'U')
			s[p] = gl[3];
		if (s[p] == 'I')
			s[p] = gl[4];
		if (s[p] == 'O')
			s[p] = gl[5];
	}

	cout << s << endl;
	system("pause");
	return 0;
}
