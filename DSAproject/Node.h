//has 2 pointers next and pre, one for Node type one for Node_1 type, constructors to set its attributes
#pragma once
# include <iostream>
using namespace std;
# include <fstream>
# include <string>
# include "Node_1.h"
class Node
{
public:

	Node * next;
	Node_1 * pre;
	int data;
	Node();
	Node(int);
};
