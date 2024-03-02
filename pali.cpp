#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool judge = 0;

static unsigned long long pali_num[199999999];

static void pali(string usr_input)
{
	string input;

	input = usr_input;

	reverse(usr_input.begin(), usr_input.end());

	if (usr_input == input)
	{
		judge = 1;
	}
	else judge = 0;
	//cout << input << "  " << usr_input << endl;
}
int main()
{
	unsigned long long usr_num;
	cin >> usr_num;
	int count = 0;

	for (int i = 1; i <= usr_num; i++)
	{
		string temp = to_string(i);
		pali(temp);
		if (judge == 1)
		{
			pali_num[count] = i;
			count++;
			//cout << temp << endl;
		}
	}
	for (int j = 0; j < count; j++)
	{
		cout << pali_num[j] << endl;
	}
	system("pause");

	return 0;
}