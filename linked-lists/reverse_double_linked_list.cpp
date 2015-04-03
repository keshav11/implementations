#include <iostream>
using namespace std;
struct node
{
	int val;
	struct node* next;
	struct node* prev;
};

struct node* push(struct node* start, int num)
{
	struct node* ptr = new struct node;
	ptr->val = num;
	if(start==NULL)
	{
		ptr->next = NULL;
		ptr->prev = NULL;
		return ptr;
	}
	
	ptr->next = start;
	ptr->prev = NULL;
	start->prev = ptr;
	return ptr;	
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

struct node* reverse(struct node* start)
{
	struct node* ptr = start;
	struct node* temp;
	while(ptr!=NULL)
	{
		temp = ptr->next;
		ptr->next = ptr->prev;
		ptr->prev = temp;		 
		ptr = ptr->next;
	}
	
	return temp->prev;	
}

int main()
{
	struct node* start = NULL;	
	start = push(start, 4);
	start = push(start, 3);
	start = push(start, 2);
	start = push(start, 1);
	print_linked_list(start);
	start = reverse(start);
	print_linked_list(start);

}
