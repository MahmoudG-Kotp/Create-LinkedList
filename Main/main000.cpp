#include <iostream>
using namespace std;

//Create Struct Node with next pointer
struct Node{
	int model, price;
	string name;
	Node *next;
	// Data   | next|
};

int main() {
	//three pointers with type Node
	//temp point to current created node
	//temp2 connect last node created with the new one
	//sptr point to first node
	Node *temp, *temp2, *sptr = NULL;
	for(int i = 0; i < 3; i++){
		//Create New Node and point to it by tempPointer
		//no & cause it's not have been exist and there's no current address
		temp = new Node;
		
		//Enter Data of Node
		cout << ">>>Enter Product "<< i << " Data<<<" << endl;
		cout << "Enter Model : "; cin >> temp -> model;
		cout << "Enter Price : "; cin >> temp -> price;
		cout << "Enter Name : "; cin >> temp -> name;
		cout << endl;
		
		//New node doesn't point to something yet
		temp -> next = NULL;
		
		//if sptr doesn't point to something - which means this's first node created - make it point to temp (first node)
		if(sptr == NULL)
			sptr = temp;
		else{
			temp2 = sptr;
			//search for last node and point it with temp2
			while(temp2 -> next != NULL)
				temp2 = temp2 -> next;
			//add node at end
			temp2 -> next = temp;	
				
		}	
	}	
	return 0;
}
