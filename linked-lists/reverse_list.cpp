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

struct node* reverse(struct node* start)
{
	struct node* current = start;
	struct node* prev = NULL;
	struct node* next;
	
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current=next;
	}
	return prev;

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
    start = reverse(start); 
    print_linked_list(start); 
  

}

