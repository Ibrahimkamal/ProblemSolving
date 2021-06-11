#include<bits\stdc++.h>
#include<unordered_map>
using namespace std;

string twoStrings(string s1, string s2) {
	int arr[26];
	for (int i = 0; i < 26; i++)
	{
		arr[i] = 0;
	}
	for (int i = 0; i < s1.length(); i++)
	{
		arr[s1[i] - 97]++;
	}
	for (int i = 0; i < s2.length(); i++)
	{
		if (arr[s2[i] - 97] > 0)
			return "YES";
	}
	return "NO";
}

//void main()
//{
//	int n;
//	string s1;
//	string s2;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s1>>s2;
//		cout<<twoStrings(s1, s2)<<endl;
//	}
//	system("pause");
//}