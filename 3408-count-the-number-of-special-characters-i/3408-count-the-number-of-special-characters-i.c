int numberOfSpecialChars(char* word) {
    bool isLower[26] = {false};
    bool isUpper[26] = {false};
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a' && word[i] <= 'z')
            isLower[word[i] - 'a'] = true;
        else if(word[i] >= 'A' && word[i] <= 'Z')
            isUpper[word[i] - 'A'] = true;
    }
    int res = 0;
    for(int i = 0; i < 26; i++){
        if(isLower[i] && isUpper[i])
            res++;
    }
     return res;
}