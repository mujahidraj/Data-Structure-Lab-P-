#include<iostream>

using namespace std;

int main()
{
   int arr1[6]={1,4,6,3,6,9};
   int arr2[6]= {5,3,7,1,2,6};
   int arr3[6];
   int i, j, k=0, x, tot;




   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(arr1[i]==arr2[j])
         {
            tot = 0;
            for(x=0; x<k; x++)
            {
               if(arr1[i]==arr3[x])
                  tot++;
            }
            if(tot==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }


   cout<<"Common elements are : ";
   for(i=0; i<k; i++){
      cout<<arr3[i]<<" ";
      if (k==0){

        cout<<"No Common Elements Found"<<endl;

      }

   }
   cout<<endl;
   return 0;
}
