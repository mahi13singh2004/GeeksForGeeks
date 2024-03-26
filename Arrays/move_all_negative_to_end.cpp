void segregateElements(int arr[],int n)
    {
        int temp[n];
        int j=0;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                temp[j]=arr[i];
                j++;
            }
        }
        
        for(int i=0; i<n; i++){
            if(arr[i]<0){
                temp[j]=arr[i];
                j++;
            }
        }
        
        for(int i=0; i<n; i++){
            arr[i]=temp[i];
        }
    }
