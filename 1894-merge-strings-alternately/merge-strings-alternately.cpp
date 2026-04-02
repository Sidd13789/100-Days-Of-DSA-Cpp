class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str="";
        int m=word1.length();
        int n=word2.length();
        int i=0,j=0;
        while(i<m && j<n){
            str+=word1[i];
            str+=word2[j];
            i++;
            j++;
        }
        while(i<m){
           str+=word1[i++]; 
        }
        while(j<n){
            str+=word2[j++];
        }
        return str;
    }
};