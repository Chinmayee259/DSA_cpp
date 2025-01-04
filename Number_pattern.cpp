//Trianagle Pattern
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n ;
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = 1 ; j < i+1 ; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
    return 0 ;
}
/*
n = 4
1
12
123
1234
*\
