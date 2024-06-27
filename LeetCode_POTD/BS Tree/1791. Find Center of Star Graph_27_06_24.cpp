class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map<int, int> degree;

        for(auto &vec : edges) {
            int u = vec[0];
            int v = vec[1];

            degree[u]++;
            degree[v]++;
        }

        for(auto &it : degree) {
            int node = it.first;
            int deg  = it.second;

            if(deg == n)
                return node;
        }

        return -1;
    }
};
