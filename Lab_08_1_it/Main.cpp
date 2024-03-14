#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int Count(char* str)
{
	if (strlen(str) < 5)
		return 0;

	int k = 0;
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == 'B' || str[i] == 'A' || str[i] == 'S' || str[i] == 'I' || str[i] == 'C')
			k++;
			return k;
}
char* Change(char* str)
{
	if (strlen(str) < 5)
		return str;
	char* tmp = new char[strlen(str) * 6 / 5 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
		while (i < strlen(str) && str[i + 4] != 0)
		{
			if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' && str[i + 3] == 'I' && str[i + 4] == 'C')
			{
				strcat(t, "Delphi");
				t += 6;
				i += 5;
			}
			else
			{
				*t++ = str[i++];
				*t = '\0';
			}
		}
	*t++ = str[i++];
	*t++ = str[i++];
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " characters included in the word \"BASIC\"" << endl;
	char* dest = new char[121];
	dest = Change(str);
	cout << "Modified string: " << dest << endl;
	return 0;
}