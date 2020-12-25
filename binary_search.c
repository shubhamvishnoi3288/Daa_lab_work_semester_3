               //Algorithm for bainay_search:
    int binarySearch(int[] A, int x)
{
    int low = 0, high = A.length - 1;
    while (low <= high)
{
  int mid = (low + high) / 2;
  if (x == A[mid]) {
  return mid;
}
  else if (x < A[mid]) {
  high = mid - 1;
}
  else {
  low = mid + 1;
}
}
  return -1;
}
           //....     Program Binary Search:
    #include<stdio.h> // header files include
    #include<stdlib.h> // header files include
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
 int arr[5],i,n,x;
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
