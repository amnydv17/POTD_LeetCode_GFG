class Solution {
public:
    int customBinarySearch(vector<vector<int>>& items, int queryPrice)
    {
        int l = 0;
        int r = items.size()-1;

        int mid;
        int maxBeauty=0;
        while(l<=r)
        {
            mid = l + (r-l)/2;

            if(items[mid][0] > queryPrice)
            {
                r = mid-1;  // ignore because after it all are greater that query[i] in right
            }
            else{
                maxBeauty = max(maxBeauty, items[mid][1]);
                l = mid+1;
            }
        }
        return maxBeauty;

    }
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();
        int m = queries.size();

        vector<int>result(m);

        // step-1--> store the array based on the price in ascending order
        sort(begin(items), end(items)); // sort based on first index value --> price because we not use comprator

        // step-2--> store max beuty seen so for in that items array update
        int maxBeautySeen = items[0][1];
        for(int i=1; i<n; i++)
        {
            maxBeautySeen = max(maxBeautySeen, items[i][1]);
            items[i][1] = maxBeautySeen;
        }

        for(int i=0; i<m; i++)
        {
            int queryPrice = queries[i];
            result[i] = customBinarySearch(items, queryPrice);
        }

        return result;
    }
};


// TC--> O(nlogn)