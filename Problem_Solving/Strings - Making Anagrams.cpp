#include <bits\stdc++.h>
using namespace std;

int makeAnagram(string a, string b) {
	int arr1[26];
	int arr2[26];
	for (int i = 0; i < 26; i++)
	{
		arr1[i] = 0;
		arr2[i] = 0;
	}
	for (int i = 0; i < a.length(); i++)
	{
		arr1[a[i] - 97]++;
	}
	for (int i = 0; i < b.length(); i++)
	{
		arr2[b[i] - 97]++;
	}
	int diff = 0;
	for (int i = 0; i < 26; i++)
	{
		diff += max(arr1[i], arr2[i]) - min(arr1[i], arr2[i]);
	}
	return diff;
}

//void main()
//{
//	string s1;
//	string s2;
//	cin >> s1 >> s2;
//	cout << makeAnagram(s1, s2);
//
//	system("pause");
//}