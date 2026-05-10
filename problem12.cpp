#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin >> n ;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> target;
    int found = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            found = i;
            break;
        }
    }

    if(found != -1) cout << "Found at index: " << found;
    else cout << "Not found";

}
