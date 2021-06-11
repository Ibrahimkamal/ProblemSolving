#include<bits\stdc++.h>
using namespace std;

int alternatingCharacters(string s) {
	int count = 0;
	for (int i = 0; i < s.length()-1; i++)
	{
		if (s[i] == s[i + 1])
			count++;
	}
	return count;
}
//void main()
//{
//	int n;
//	cin >> n;
//	string s;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		cout << alternatingCharacters(s) << endl;
//	}
//
//	system("pause");
//}