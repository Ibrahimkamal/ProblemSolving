#include<bits\stdc++.h>
#include<unordered_map>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
	unordered_map<char, int> map;
	for (int i = 0; i < jewels.length(); i++)
	{
		map[jewels[i]]++;
	}
	int count = 0;
	for (int i = 0; i < stones.length(); i++)
	{
		if (map[stones[i]] > 0)
			count++;
	}
	return count;
}

void main()
{

	system("pause");
}