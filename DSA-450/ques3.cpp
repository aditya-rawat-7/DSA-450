//Find the "Kth" max and min element of an array 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << "Min: " << arr[k-1] << " Max: " << arr[n-k];
    return 0;
}