#include <iostream>
using namespace std;

int main() {
	string str;
	int count [] = {0, 0, 0, 0, 0, 0};
	char symbol [] = {'a', 'e', 'o', 'i', 'u', 'y'};
	int k = 0;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			count[0]++;
		} else if (str[i] == 'e')  {
			count[1]++;
		} else if (str[i] == 'o')  {
			count[2]++;
		} else if (str[i] == 'i')  {
			count[3]++;
		} else if (str[i] == 'u')  {
			count[4]++;
		} else if (str[i] == 'y')  {
			count[5]++;
		}
	}
	for (int i = 0; i < (sizeof(count)/sizeof(count[0])); i++) {
		k += count[i];
		cout<<symbol[i]<<" - "<<count[i]<<endl;
	}
	cout<<"all = "<<k<<endl;
	return 0;
	}
