           // algorithm recurive _binary search.....

/*       #include<stdio.h>
#include<stdlib.h>
int count=0;
int binarySearch(int arr[], int l, int r, int x)
{
count++;
while (l <= r)
{
count++;
int m = l + (r-l)/2;
count++;
if (arr[m] == x)
{
count++;
return m;
}
if (arr[m] < x)
{
count++;
l = m + 1;
}
else
{
count++;
r = m - 1;
}
}
return -1;
}                   */
                            Program:
#include<stdio.h>
#include<stdlib.h>
int count=0;
int binarySearch(int arr[], int l, int r, int x)
{
count++;
while (l <= r)
{
count++;
int m = l + (r-l)/2;
count++;
if (arr[m] == x)
{
count++;
return m;
}
if (arr[m] < x)
{
count++;
l = m + 1;
}
else
{
count++;
r = m - 1;
}
}
return -1;
}
int main(void)
{
int arr[25],i,n,x;
printf("\nEnter Size of Array:");
scanf("%d",&n);
printf("\nEnter Elements of the Array:");
count++;
for(i=0;i<n;i++)
{
count++;
scanf("%d",&arr[i]);
count++;
}
printf("\nEnter item to Search:");
scanf("%d",&x);
count++;
int result = binarySearch(arr, 0, n-1, x);
(result == -1)? printf("\nElement is not present in array"): printf("\nElement is
present at index %d", result);
printf("\nCount=%d",count);
return 0;
}