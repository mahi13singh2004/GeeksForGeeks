class Solution{
    public:
    int searchInsertK(vector<int>array, int N, int k)
    {
        int answer=N;
        int start=0;
        int end=N-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]>=k){
                answer=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    return answer;
    }
};
