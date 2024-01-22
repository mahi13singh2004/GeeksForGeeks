class Solution {
  public:
    string armstrongNumber(int n){
        long long sum=0;
        long long last_digit=0;
        int new_n=n;
        
        while(n>0){
            last_digit=n%10;
            sum=sum+pow(last_digit,3);
            n=n/10;
        }
        
        if(sum==new_n){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};