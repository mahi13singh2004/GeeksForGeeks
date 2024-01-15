#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& array, int n) {
        long long missing=0;
        long long current_sum=0;
        
        for(int i=0; i<n-1; i++){
            current_sum=current_sum+array[i];
        }

        long long required_sum=(n*(n+1))/2;
        
        long long answer=required_sum-current_sum;
        
        return answer;
    }