#include<bits\stdc++.h>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
	int index;
	if (ruleKey[0] == 't')
		index = 0;
	else if (ruleKey[0] == 'c')
		index = 1;
	else
		index = 2;
	int count = 0;

	for (auto &item : items)
	{
		if (item[index] == ruleValue)
			count++;
	}
	return count;
}
//void main()
//{
//	vector<vector<string>> items = { {"phone", "blue", "pixel"},{"computer", "silver", "lenovo"},{"phone", "gold", "iphone"} };
//	string ruleKey = "color";
//	string ruleValue = "silver";
//	cout << countMatches(items, ruleKey, ruleValue);
//	system("pause");
//}