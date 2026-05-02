class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n,false);
        int prov=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,isConnected,visited);
                prov++;
            }
        }
        return prov;
    }
    void dfs(int i,vector<vector<int>>& g,vector<bool>& visited){
        int m=g.size();
        visited[i]=true;
        for(int j=0;j<m;j++){
            if(g[i][j]==1 && !visited[j]){
                dfs(j,g,visited);
            }
        }
    }
};