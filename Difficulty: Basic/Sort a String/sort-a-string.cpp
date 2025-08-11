string sort(string s) {
    // complete the function here
    vector<int> freq(26,0);
        
        for(char ch:s){
            freq[ch - 'a'] += 1;
        }
        
        string res = "";
        for(int i=0;i<26;i++){
            char ch = i + 'a';
            while(freq[i]){
                res += ch;
                freq[i]--;
            }
            
        }
        return res;
}