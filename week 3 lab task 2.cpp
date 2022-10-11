#include <iostream>
using namespace std;

void encode(string s, int j)
{
    int temp;
    for(int i = j; i < s.size(); i = i+j+1)
    {
        temp = s[i];
        s[i] = (char)(temp + j);
    }
    cout << "\n\nConverted encoded sentence : " << s;
    cout << endl << endl;
}

int main()
{
    int j=2;
    string s;
    cout<< "Please Enter a Sentence : ";

    getline(cin,s);
    cout<< "The number: "<<j<<endl;


    cout << "\nSentence : " << s;
    cout << "\nNumber : " << j;

    encode(s, j);
    return 0;
}


