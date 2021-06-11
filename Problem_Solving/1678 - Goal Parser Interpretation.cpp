#include<bits\stdc++.h>
using namespace std;
string interpret(string command) {
	string out = "";
	int i = 0;
	while (i < command.length())
	{
		if (command[i] == 'G')
		{
			out += 'G';
			i++;
		}
		else if (command[i] == '(' && command[i + 1] == ')')
		{
			out += 'o';
			i += 2;
		}
		else if (command[i] == '(' && command[i + 1] == 'a')
		{
			out += "al";
			i += 4;
		}
	}
	return out;
}
//void main()
//{
//	string command = "G()(al)";
//	cout << interpret(command);
//	system("pause");
//}