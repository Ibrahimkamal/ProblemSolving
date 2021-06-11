#include<bits\stdc++.h>
using namespace std;

int maxDepth(string s) {
	int openparantasis=0;
	int max = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			openparantasis++;
		else if ((s[i] == ')'))
			openparantasis--;
		if (openparantasis > max)
			max = openparantasis;
	}
	return max;
}

//void main()
//{
//
//	system("pause");
//}