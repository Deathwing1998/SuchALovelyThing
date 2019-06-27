#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void zagl(string &s)
{
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'A')
			s[p] = 'a';
		if (s[p] == 'E')
			s[p] = 'e';
		if (s[p] == 'Y')
			s[p] = 'y';
		if (s[p] == 'U')
			s[p] = 'u';
		if (s[p] == 'I')
			s[p] = 'i';
		if (s[p] == 'O')
			s[p] = 'o';
	}

}
int main()
{
	string sa("ROZA UPALA NA LAPU AZORA"),sb("KLARA UKRALA U KARLA KORALI");
	zagl(sa);
	zagl(sb);
	bool a = false;	if ((sa == "RoZa uPaLa Na LaPu aZoRa") ||(sb=="KLaRa uKRaLa u KaRLa KoRaLi"))
		a = true;
	if (!a)
		cout << "ERROR" << endl;
	else
		cout << "Good" << endl;
	system("pause");
	return 1;
}
