class Solution {
public:
int maxvowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            if(maxvowel(s[i])){
                count++;
            }
        }
        maxi=count;
            for(int i=k;i<n;i++){
                if(maxvowel(s[i])){
                    count++;
                }
                if(maxvowel(s[i-k])){
                    count--;
                }
            maxi=max(maxi,count);
            }
        
        return maxi;
    }
};