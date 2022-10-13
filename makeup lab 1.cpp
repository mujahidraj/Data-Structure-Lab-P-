#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    int min_index =0;
    int temp=0;

    cout<< " Elements are : ";
    for(int i=0; i<6;i++){

       cin >> arr[i];
    }
    cout<<endl<<"---------"<<endl;

    for(int i=0; i<6; i++){
        min_index = i;

        for(int j=i+1; j<6; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
     cout << "Sorted Elements are :";
    for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
