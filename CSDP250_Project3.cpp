#include <iostream>
#include "head.h"

using namespace std;

int main() {
	int num;
	BSTree Rando;
	cout << "This program generates 40 random numbers and inputs into a binary search tree, then displays the binary search tree in various traversal forms"<<endl;
	for (int i = 0; i < 40; i++) {
		num = 0 + (rand() % 100);
		Rando.insertNode(num, Rando.root);
	}
	Rando.displayBST(Rando.root);
	return 0;
}