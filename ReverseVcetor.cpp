#include<iostream>
#include<vector>
using namespace std;

void Reverse(vector<int>&vec)
{
    int sz = vec.size();
    int s = sz - 1;
    for(int i = 0 ; i<sz ; i++)
    {
        if(i == (sz/2))
        {
            break;
        }
        int temp = vec[i];
        vec[i] = vec[s];
        vec[s] = temp;
        s--;
    }
}

int main()
{
    vector<int>vec = {1,8,6,3,1,4,3};
    Reverse(vec);
    for(int val: vec)
    {
        cout << val <<" ";
    }
    return 0;
}