#include <cstdio>
#include <iostream>

using namespace std;
struct node 
{
	int val;
	node * next;
};

struct node* push(struct node* start, int val)
{
	struct node* nw = new struct node;	
	nw->val = val;
	nw->next = start;
	return nw;
	
}

void print_linked_list(struct node* start)
{
	while(start!=NULL)
	{
		cout << start->val << "->";
		start = start->next;
	}
	cout << "NULL" << endl;
}

struct node* middleList(struct node* start)
{
	struct node* slowPtr = start;
	struct node* fastPtr = start;
	while(fastPtr!=NULL && fastPtr->next!=NULL)
	{
		fastPtr = fastPtr->next->next;
		slowPtr = slowPtr->next;
	}
	return slowPtr;
}

int main()
{
	struct node* start = NULL;	
	start = push(start, 1);
	start = push(start, 2);
    start = push(start, 3);
    start = push(start, 4);
    start = push(start, 5);
    start = push(start, 6);    
    
    print_linked_list(start);    
    cout << middleList(start)->val << endl;
    start = push(start, 7);    
    print_linked_list(start);    
	cout << middleList(start)->val << endl;


}

