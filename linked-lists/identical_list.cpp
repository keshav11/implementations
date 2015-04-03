#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

// node structure 
struct node 
{
	int val;
	node * next;
};

// pushes at start
struct node* push(struct node* start, int val)
{
	struct node* nw = new struct node;	
	nw->val = val;
	nw->next = start;
	return nw;
	
}
// prints the linked list
void print_linked_list(struct node* start)
{
	while(start!=NULL)
	{
		cout << start->val << "->";
		start = start->next;
	}
	cout << "NULL" << endl;
}
// inserts num in a sorted way and returns start of the list
struct node* sorted_insert(struct node* start, int num)
{
	struct node* temp = new node;
	temp->val = num;
	struct node* ptr = start;
	struct node* prev = NULL;
	if(start==NULL)
	{
		temp->next = NULL;
		return temp;		
	}
	
	while(ptr != NULL && ptr->val<num)
	{
		prev = ptr;
		ptr = ptr->next;
	}
	
	if(prev==NULL)
	{
		return push(start, num);
	}
	else
	{
		temp->next = prev->next;
		prev->next = temp;
		return start;
	}
	
	

}
int identical_list(struct node* start1, struct node* start2)
{
	while(start1!=NULL && start2!=NULL)
	{
		if(start1->val != start2->val)
			return 0;
		start1 = start1->next;
		start2 = start2->next;		
	}
	return 1;
}
int main()
{
	// creating a sorted list
	struct node* start = NULL;	
	start = sorted_insert(start, 1);
	start = sorted_insert(start, 2);
    start = sorted_insert(start, 5);
    start = sorted_insert(start, 3);
    start = sorted_insert(start, 4);
    print_linked_list(start);
    
    struct node* start1 = NULL;	
	start1 = sorted_insert(start1, 1);
	start1 = sorted_insert(start1, 3);
    start1 = sorted_insert(start1, 5);
    start1 = sorted_insert(start1, 2);
    start1 = sorted_insert(start1, 4);
    print_linked_list(start1);
	
	if(identical_list(start, start1))
		cout << "Identical";
	else 
		cout << "Not Identical";
	

}


