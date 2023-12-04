#include<iostream>
using namespace std;

// int main(){
//     int arr[] = {1, 2, 4, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3, ans, mid, pos=arr[0], count=1;
//     int start = 1, end=arr[n-1] - arr[0];

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         for(int i=0; i<n; i++){
//             if(pos + mid <= arr[i]){
//                 count++;
//                 pos = arr[i];
//             }
//         }

//         if(count < k){
//             end = mid - 1;
//         }
//         else{
//             ans = mid;
//             start = mid + 1;
//         }
//     }
//     cout<<ans;
// }


int main(){
    int arr[] = {3, 6, 11, 7}, h=8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0, max=0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int start=sum/h, end=max, mid=0, ans=0;
    
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int count=0;
        for(int i=0; i<n; i++){
            count+=arr[i] / mid;
            if(arr[i] % mid){
                count++;
            }
        }

        if(count > h){
            start = mid + 1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
    }
    cout<<mid;
}