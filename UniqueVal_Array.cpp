#include<iostream>
using namespace std;

int Unique(int arr[] , int sz)
{
    for(int i=0; i<sz ; i++)
    {
        int count = 0;
        for(int j=0; j<sz; j++)
        {
            if(arr[i] == arr[j])
            {
                count += 1;
            }
        }
        if(count == 1)
        {
          return arr[i];
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,2,3,4,1,2,6,7,3};
    int sz = 9;
    cout << Unique(arr , sz);
    return 0;
}