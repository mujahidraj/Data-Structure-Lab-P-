#include <iostream>

using namespace std;

int array(int number, int array[], int length)
{
    int x = 0;
    for(int i = 0; i < length; i++)
        if(array[i] == number)
            x++;
    return x;
}

int main()
{    int num;
    int numbers[10] = {5,6,7,1,6,0,4,6,2,1};
    cout<<"Input a number to search: ";
    cin>>num;
    cout << num << " occurs "<< array(num, numbers, 10)<< " times in the array.";
    return 0;
}
