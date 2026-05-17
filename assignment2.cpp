#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout<< "Selection sort= ";
    for(int i = 0; i < k; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
            if(min != i){
                swap(arr[i],arr[min]);
            }
        }
        for(int i = 0; i < n; i++){
            cout<< arr[i] << " ";
        }
        cout << endl;


        cout<<"insertion sort= ";
   for(int i = k; i < n; i++){
       int temp = arr[i];
        int j = i-1;

        while( j > -1 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
    for(int i = 0; i< n ; i++){
        cout << arr[i]<< " ";
    }
}
