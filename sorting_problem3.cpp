
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "number of book= ";
    cin >> n;
    int arr[n];
    cout << "list= ";
    for(int i = 0; i<n ;i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
       int temp = arr[i];
        int j = i-1;

        while( j > -1 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
    cout<< "Order= ";
    for(int i = 0; i< n ; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;

}
