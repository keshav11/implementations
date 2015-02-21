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
void delete_node(struct node* del)
{
	struct node* next = del->next;
	del->val = next->val;
	del->next = next->next;
	delete next;
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
    delete_node(start->next);
    print_linked_list(start);
}

