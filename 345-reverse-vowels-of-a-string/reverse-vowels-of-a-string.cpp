class Solution {
public:
    int isvowels(char c){
        c=tolower(c);
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    string reverseVowels(string s) {
        int str=s.size();
        
        int left=0;
        int right=str-1;
        while(left<right){
            if(!isvowels(s[left])){
                left++;
            }else if(!isvowels(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }

return s;
    }
};