#include "main.h"

/**
* 
* Description - reverses the content of an array of integers.
* Where n is the number of elements of the array
*
*/

void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;
while (left < right)
{
int tmp = a[left];
a[left] = a[right];
a[right] = tmp;
left++;
right--;
}
}
