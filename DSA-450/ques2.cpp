//Find the maximum and minimum element in an array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << "Min: " << arr[0] << " Max: " << arr[n-1];
    return 0;
}