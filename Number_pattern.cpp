#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n ;

    //Trianagle Pattern
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = 1 ; j < i+1 ; j++)
        {
            cout << j;
        }
        cout << endl;
    }

        /*
    n = 4
    1
    12
    123
    1234
    */

   //Reverse triangle
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = i ; j >= 1 ; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    /*
    n = 4 
    1
    21
    321
    4321
    */

    //Floyd's triangle pattern
    int count = 1;
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j=0 ; j < i ; j++)
        {
            cout << count;
            count = count + 1;
        }
    }
    /*
    n = 4
    1
    23
    456
    78910
    */

    //Inverse Triangle Pattern
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = n ; j > i ; j--)
        {
            cout << " ";
        }
        
        for (int k = 1 ; k <= i ; k++)
        {
            cout << k;
        }
        
        for (int m = i-1 ; m >= 1 ; m--)
        {
            cout << m;
        }        
        cout << endl;
    }
    /*
    n = 4
       1
      121
     12321
    1234321
    */
    return 0 ;
}

