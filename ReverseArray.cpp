#include<iostream>
using namespace std;

void Reverse(int arr[] , int sz)
{
    int s = sz-1;
    for(int i = 0 ; i<sz ; i++)
    {
        if(i == (sz/2))
        {
            break;
        }
        int temp = arr[i];
        arr[i] = arr[s];
        arr[s] = temp;
        s--;
        
    }
}

int main()
{
    int arr[]={22,67,0,8,11,22,43,5,999};
    int sz=9;
    for(int i = 0 ; i<sz ; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    Reverse(arr , sz);
    for(int i = 0 ; i<sz ; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}