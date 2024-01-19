#include<bits/stdc++.h>
int print2largest(int arr[], int n) {
	long long largest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    long long second_largest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }

    return second_largest;
	}