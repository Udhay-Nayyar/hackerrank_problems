#include <stdio.h>

void reverseArray(int arr[], int n,int left,int right){
    // Implement the function to reverse the array in-place
    if(left>right){
        return ;
    }
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    left++;
    right--;
    reverseArray(arr,n,left,right);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int left=0;
    int right=n-1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n,left,right) ;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
