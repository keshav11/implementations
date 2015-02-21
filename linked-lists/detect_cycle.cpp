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

void detectCycle(struct node* start)
{
	struct node* fastPtr = start;
	struct node* slowPtr = start;	
	
	while(fastPtr && fastPtr->next && slowPtr)
	{
		fastPtr = fastPtr->next->next;
		slowPtr = slowPtr->next;
		if(fastPtr==slowPtr)
		{
			cout << "Cycle Detected\n";
			return;
		}

	}
	
	cout << "Cycle Not Detected\n";
	
}

int main()
{
	struct node* start = NULL;	
	start = push(start, 1);
	start = push(start, 2);
    start = push(start, 3);
    start = push(start, 4);
    start->next->next->next->next = start;    
    detectCycle(start); 	
    
    struct node* start1 = NULL;	
	start1 = push(start1, 1);
	start1 = push(start1, 2);
    start1 = push(start1, 3);
    start1 = push(start1, 4);
    
    detectCycle(start1); 
  

}


