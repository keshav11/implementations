// Maximum subarray problem - Kadane's Algorithm
// Reference - http://en.wikipedia.org/wiki/Maximum_subarray_problem
#include <stdio.h>
#define max(a,b) (a)>(b)?(a):(b)

int MaxSubArray(int a[], int size)
{
	int max_ending_here = a[0], max_so_far = a[0];
	int i;
	for(i = 1; i < size; i++)
	{
		max_ending_here = max(a[i], a[i] + max_ending_here );
		max_so_far = max(max_so_far, max_ending_here);
	}	
	return max_so_far;
}

int main()
{
	int arr[] = {2, 4, -1, 2, -3, 2, -3, -1};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%d", MaxSubArray(arr, n));
	return 0;
}
