#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int* func(string s, int f[6]) {
	for (int i = 0; i < 6; i++)
		f[i] = 0;
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a')
			f[0]++;
		if (s[p] == 'e')
			f[1]++;
		if (s[p] == 'y')
			f[2]++;
		if (s[p] == 'u')
			f[3]++;
		if (s[p] == 'i')
			f[4]++;
		if (s[p] == 'o')
			f[5]++;
	}
}
int main()
{
	int t1[6], t2[6];
	int arr[] = { 4,0,0,1,1,0 };
	int mas[] = { 0,3,0,0,0,3 };
	bool a = true;
	func("roza upala na lapu azora", t1);
	func("", t2);
	for (int i = 0; i < 6; i++)
	{
		if (t1[i] != arr[i] || t2[i] != mas[i])
			a = false;
	}
	if (!a) {
		cout << "Error" << endl;
		return 1;
	}
	else
		cout << "Good" << endl;
	system("pause");
	return 0;
}
