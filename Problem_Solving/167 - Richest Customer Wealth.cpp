#include<bits\stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
	int row = accounts.size();
	int columns = accounts.size();

	vector<int> wealth(row);
	for (int i = 0; i < row; i++)
	{
		wealth[i] = 0;
		for (int j = 0; j < columns; j++)
		{
			wealth[i] += accounts[i][j];
		}
	}
	int max = wealth[0];
	for (int i = 0; i < row; i++)
	{
		if (wealth[i] > max)
			max = wealth[i];
	}
	return max;
}

//void main()
//{
//
//	system("pause");
//}