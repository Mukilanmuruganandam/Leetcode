char nextGreatestLetter(char* a,int n, char target) {
    int freq[26]={},i,t;
    for(i=0;i<n;i++)
        freq[a[i]-'a']++;
    t=target-'a';
    for(int i=0;i<26;i++)
        if(i>t && freq[i])
            return i+'a';

    return a[0];
}