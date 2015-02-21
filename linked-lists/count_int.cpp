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

int countN(struct node* start, int n)
{
	struct node* ptr = start;
	int count = 0;
	
	while(ptr!=NULL)
	{
		if(ptr->val == n)
			count++;
		ptr = ptr->next;
	}
	return count;

}

int main()
{
	struct node* start = NULL;	
	start = push(start, 1);
	start = push(start, 2);
    start = push(start, 2);
    start = push(start, 2);
    start = push(start, 5);
    start = push(start, 6);        
    print_linked_list(start);    
    cout << countN(start, 2) << endl;   
    cout << countN(start, 1) << endl;   

}

