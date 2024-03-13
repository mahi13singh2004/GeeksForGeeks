string sort(string s){
    string empty;
    vector<int>array(26,0);
    for(int i=0; i<s.size(); i++){
        array[s[i]-'a']+=1;
    }
    
    for(int i=0; i<26; i++){
        while(array[i]>0){
            empty+=('a'+i);
            array[i]--;
        }
    }
    return empty;
}
