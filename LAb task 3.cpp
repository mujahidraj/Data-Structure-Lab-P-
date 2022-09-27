
#include<iostream>

using namespace std;

int main()
{
    int x,m,a[10]={1,4,6,3,6,9,1};

  cout<<"Numbers in Array : "<<endl;

  for(x=0;x<7;x++)
  {
  cout<<" "<<a[x]<<" ";
  }
  cout<<"\n";
  cout<<"Duplicate Values in Given number are : "<<endl;
  for(x=0; x<7; x++)
   {
    for(m=x+1;m<7;m++)
    {
    if(a[x]==a[m])
    {
    cout<<" "<<a[x]<<" ";
    }
   }
   }
  return 0;
 }
