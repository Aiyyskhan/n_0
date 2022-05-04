#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void str_converter(string in_s, string &out_s)
{
	for (int i = 0; i < in_s.length(); i++)	
	{
		char c = in_s[i];
		out_s += count(in_s.begin(), in_s.end(), tolower(c)) > 1 ? ')' : '(';
	}
}

int main()
{
	string input_str;
	string output_str;

	while (1)
	{
		input_str = "";
		output_str = "";

		cout << "Введите строку или 'stop' чтобы выйти: ";
		getline(cin, input_str);

		if (input_str == "stop")
		{
			cout << "Bye-Bye!" << endl;
			break;
		}

		str_converter(input_str, output_str);
		cout << output_str << endl;
	}
	return 0;
}