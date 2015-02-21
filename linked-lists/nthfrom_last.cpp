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

struct node* nth_from_last(struct node* start, int n)
{
	struct node* first = start;
	struct node* second = start;
	int itr = 0;
	while(itr<n)
	{
		first = first->next;
		itr++;
	}
	
	while(first!=NULL)
	{
		first = first->next;
		second = second->next;
	}
	return second;

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
    cout << nth_from_last(start, 2)->val << endl;   
	cout << nth_from_last(start, 3)->val << endl;

}

