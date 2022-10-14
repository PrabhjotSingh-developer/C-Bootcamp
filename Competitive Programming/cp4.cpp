#include<iostream>
using namespace std;
int main()
{
     int a1[2]={1,2};
     int a2[2]={3,4};
     int as1 = 2,as2 = 2,total;
     total = as1 + as2;
     int t = total/2;
     float m;
     int c1[as1+as2];
     int i=0,j=0,k=0;
     while(i<as1 && j< as2)
     {
          if(a1[i]<a2[j])
          {
             c1[k] = a1[i];
             i++;
             k++;
          }
          else 
          {
             c1[k]=a2[j];
             j++; k++;
          }    
     }
     while(i<as1)
     {
          c1[k] = a1[i];
          i++;k++;
     }
     while(j<as2)
     {
         c1[k] = a2[j];
         j++;k++;
     }
     if(total%2==0)
     {
         m = (c1[t-1] + c1[t])/2.0;
     }
     else
        m = c1[t];
    
    cout<<"Median "<<m;
}