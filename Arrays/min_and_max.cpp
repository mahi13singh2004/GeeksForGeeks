int max(int num1, int num2){
        if(num1>num2){
            return num1;
        }
        else{
            return num2;
        }
    }
    
    int min(int num1, int num2){
        if(num1>num2){
            return num2;
        }
        else{
            return num1;
        }
    }

    int find_max(long long a[], int n){
        int maximum=INT_MIN;
        for(int i=0;  i<n; i++){
            if(a[i]>maximum){
                maximum=max(a[i],maximum);
            }
        }
        return maximum;
    }
    
    int find_min(long long a[], int n){
        int minimum=INT_MAX;
        for(int i=0;  i<n; i++){
            if(a[i]<minimum){
                minimum=min(a[i],minimum);
            }
        }
        return minimum;
    }


    pair<long long, long long> getMinMax(long long a[], int n) {
        int maximum=find_max(a,n);
        int minimum=find_min(a,n);
        
        pair<int,int>mahi;
        mahi={minimum,maximum};
        return mahi;
    }
