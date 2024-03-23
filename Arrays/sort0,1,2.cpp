public:
    void sort012(int a[], int n)
    {
        long long count0=0;
        long long count1=0;
        long long count2=0;
        
        for(int i=0; i<n; i++){
            if(a[i]==1){
                count1++;
            }
            else if(a[i]==0){
                count0++;
            }
            else{
                count2++;
            }
        }
        
        for(int i=0; i<count0; i++){
            a[i]=0;
        }
        
        for(int i=count0; i<count1+count0; i++){
            a[i]=1;
        }
        
        for(int i=count0+count1; i<n; i++){
            a[i]=2;
        }
    }
