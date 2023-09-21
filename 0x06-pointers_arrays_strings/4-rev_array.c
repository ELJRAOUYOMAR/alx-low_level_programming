#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array of integers.
* @n: The number of elements in the array.
*
* Description: This function reverses the order of elements in the array.
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

