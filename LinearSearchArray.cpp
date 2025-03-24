#include<iostream>
using namespace std;

int linear_search(int arr[] , int sz , int target)
{
    for(int i = 0 ; i < sz ; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4,2,7,8,3,1};
    int sz = 6;
    int target = 8;
    cout << "The target " << target << " is at index " << linear_search(arr , sz , target);
    return 0;
}