//Reverse the array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the element " << i << ": ";
        cin >> arr[i];
    }
    int j=n-1, k=0;
    while(k<j)
    {
        swap(arr[k],arr[j]);
        k++;
        j--;
    }
    for(int i=0;i<n;++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}