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
int getnthval(struct node* start, int n)
{
	struct node* ptr = start;
	int itr = 1;
	while(ptr!=NULL && itr<n)
	{
		ptr = ptr->next;
		itr++;
	}
	return ptr->val;
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
    cout << getnthval(start, 6) << endl;	
}
