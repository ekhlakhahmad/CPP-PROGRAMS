// Write a programt to Add the all element in a Array.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,2,6,9,8,7,4,3,1};
    int n, *ptr, sum = 0;
    n = size(arr);
    
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    ptr = &sum;
    cout<<*ptr<<endl;
    ptr++;
    
    return 0;
}