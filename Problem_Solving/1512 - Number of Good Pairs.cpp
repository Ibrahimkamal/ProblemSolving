#include<bits\stdc++.h>
#include<unordered_map>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
	unordered_map<int, int> map;
	int out = 0;
	for (int num : nums) {
		
		out += map[num];
		map[num]++;
	}
	return out;
}

//void main()
//{
//	//vector<int> nums = { 1, 2, 3, 1, 1, 3 };
//	vector<int> nums = {1, 1, 1, 1};
//	cout<<numIdenticalPairs(nums);
//	system("pause");
//}