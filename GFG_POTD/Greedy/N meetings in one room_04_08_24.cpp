class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Aman Yadav
        vector<pair<int,int>>meet;
        
        for(int i=0;i<n;i++)
        {
            meet.push_back({end[i],start[i]});
        }
        sort(meet.begin(),meet.end());
        int count=0;
        int endtime=-1;
        
        for(int i=0;i<n;i++)
        {
            if(meet[i].second>endtime)
            {
                count++;
                endtime=meet[i].first;
            }
        }
    return count;
    }
};