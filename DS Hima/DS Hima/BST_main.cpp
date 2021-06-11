
#include "BSTree.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	BSTree bst;

	//build tree       8 
	//               /   \ 
	//              3     13
	//             / \   / 
	//            1   4 9

	//==============================================================
	//							InsertBST function
	//==============================================================
	cout << "building the tree with sequence 8 13 3 9 1 4" << endl << endl;
	bst.insertBST(8);
	bst.insertBST(13);
	bst.insertBST(3);
	bst.insertBST(12);
	bst.insertBST(7);
	bst.insertBST(5);
	bst.insertBST(9);
	bst.insertBST(1);
	bst.insertBST(4);
	cout << "Tree Before Calling function in preorder traverse \n \n";
	bst.preorder_traverse();
	cout << endl;
	//==============================================================
	//							Traversal
	//==============================================================
	// traverse the tree with different orders
	/*cout << "The tree pre-order traversal" << endl;
	bst.preorder_traverse();
	cout << endl;

	cout << "The tree in-order traversal" << endl;
	bst.inorder_traverse();
	cout << endl;

	cout << "The tree post-order traversal" << endl;
	bst.postorder_traverse();
	cout << endl;*/
	int n = bst.CountGreater(6);
	cout << "Number of Node that has values greater than six : " << n << endl;

	bst.DeleteExactlyOneChild();
	cout << "Tree after deletion in preorder traverse \n \n";
	bst.preorder_traverse();
	cout << endl;
	//==============================================================
	//							Destroy
	//==============================================================
	cout << "Destroying tree " << endl;
	bst.destroy_tree();
	string s;
	system("pause");
	getline(cin, s); //just to pause console (output) screen
	return 0;
}
