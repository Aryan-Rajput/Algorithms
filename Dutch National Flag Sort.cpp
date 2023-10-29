#include<bits/stdc++.h>
using namespace std;
void DNF(int arr[], int n)
{
    int l=0;
    int r=n-1;

    for(int i=0;i<n && i<=r;)
    {
        if(arr[i]==0)
        {
            swap(arr[l],arr[i]);
            l++;
            i++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[r]);
            r--;
        }
        else{
            i++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    DNF(arr, n);
    print(arr, n);
    return 0;
}
