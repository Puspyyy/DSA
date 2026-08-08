#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10,20,30,40,50};
    int n = 5;
    int i;
    int value = 30;
    int pos = -1;

    for(i = 0; i<n; i++) {
        if(arr[i] == value) {
            pos = i;
            break;
        }
    }
    if(pos != -1) {
        for(i = pos; i<n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    }
    cout<<"arrau after deeltion";
    for(i = 0; i<n ; i++){
        cout<<arr[i]<<" ";

    }
    return 0;


}

