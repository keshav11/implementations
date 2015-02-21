#include <cstdio>
#include <iostream>
#include <stack>
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

void palindrome(struct node* start)
{
	stack <int> list;
	struct node* ptr = start;
	while(ptr!=NULL)
	{
		list.push(ptr->val);
		ptr = ptr->next;
	}
	ptr = start;
	while(ptr!=NULL)
	{
		if(list.top()!=ptr->val)
		{
			cout << "Not a palindrome!\n";
			return;
		}
		ptr = ptr->next;
		list.pop();
	}
	
	cout <<"Palindrome\n";
}
int main()
{
	struct node* start = NULL;	
	start = push(start, 6);
	start = push(start, 5);
    start = push(start, 2);
    start = push(start, 2);
    start = push(start, 5);
    start = push(start, 6);        
    print_linked_list(start); 
	palindrome(start);
  

}


