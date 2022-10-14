#include<stdio.h>
#include<conio.h>
int main()
{
      int arr[10] = {1,9,11,5,6,2};

      int mid,start=0,end=5,i;
      mid = (start + end)/2;
      if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid + 1])
      {
          printf("Ans = %d",arr[mid]);
           return 0;
      }
      else if(arr[mid]>arr[mid - 1])
          for(i=mid;i<=end;i++)
          {
              if(arr[mid]>arr[mid-1] && arr[mid]>=arr[mid+1])
              {
                   printf("Ans = %d",arr[i]);
                   return 0;
              }
              else
                 mid = mid + 1;
          }
      else
           for(i=0;i<=mid;i++)
          {
              if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1])
              {
                   printf("Ans = %d",arr[i]);
                   return 0;
              }
              else
                 mid = mid - 1;
          }
        
}