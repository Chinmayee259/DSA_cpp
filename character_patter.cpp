#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter the number : ";
    cin >> n;

    //triangle pattern
    for(int i = 1 ; i < n+1 ; i++)
    {
        for (char j = 65; j < 65+i ; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    /*
    A
    AB
    ABC
    ABCD
    */

   //reverse triangle
   for(int i = 0 ; i < n ; i++)
    {
        for (char j = 65+i; j >= 65 ; j--)
        {
            cout << j;
        }
        cout << endl;
    }

   /*
   A
   BA
   CBA
   DCBA
   */
    

    //Floyd's triangle
    char c = 64;
    for(int i = 0 ; i < n ; i++)
   {
        for (char j = 0 ; j <= i ; j++)
        {
            c = c + 1;
            cout << c;
            
        }
        cout << endl;
    }

   /*
   A
   BC
   DEF
   GHIJ
   */
    return 0;
}
