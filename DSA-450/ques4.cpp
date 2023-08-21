//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,0};
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}