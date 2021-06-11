#include<bits\stdc++.h>
#include <unordered_map>

using namespace std;
void checkMagazine(vector<string> magazine, vector<string> note) {
	unordered_map<string, int> map;
	for (auto & it:magazine)
	{
		map[it]++;
	}
	for (auto &it : note)
	{
		if (map[it] > 0)
			map[it]--;
		else {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
}

//void main()
//{
//	int n;
//	int d;
//	cin >> n >> d;
//	vector<string>magazine(n);
//	vector<string>note(d);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> magazine[i];
//	}
//	for (int i = 0; i < d; i++)
//	{
//		cin >> note[i];
//	}
//	checkMagazine(magazine, note);
//	system("pause");
//}




















//bool ransom_note(vector<string> magazine, vector<string> ransom) {
//	unordered_map<string, int> words;
//	for (auto &it : magazine)
//		words[it]++;
//	for (auto &it : ransom) {
//		if (words[it]>0)
//			words[it]--;
//		else
//			return false;
//	}
//	return true;
//}