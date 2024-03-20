int isPalindrome(string S)
	{
	    int start=0;
	    int end=S.size()-1;
	    bool flag=true;
	    while(start<end){
	        if(S[start]!=S[end]){
	            flag=false;
	            break;
	        }
	        else{
	            start++;
	            end--;
	        }
	    }
	    if(flag==true){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}
