#include "main.h"

/**
* 
* Description - reverses the content of an array of integers.
* Where n is the number of elements of the array
* Return: 0 if the strings are equal, a positive value if s1 > s2, and a negative value if s1 < s2.
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
