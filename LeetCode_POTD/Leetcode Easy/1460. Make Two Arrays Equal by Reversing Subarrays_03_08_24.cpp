class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        
//         sort(begin(target), end(target));
//         sort(begin(arr), end(arr));
        
//         for(int i =0; i<n; i++)
//         {
//             if(target[i] != arr[i])
//             {
//                 return false;
//             }
//         }
//     return true;
        
        
        
        // Approach-2
        unordered_map<int, int>mp;
        for(int &num : target)
        {
            mp[num]++;
        }
        
        for(int &num : arr)
        {
            if(mp.find(num)==mp.end())
            {
                return false;
            }
            
            mp[num]--;
            if(mp[num]==0)
            {
                mp.erase(num);
            }
        }
    return mp.size()==0;
    }
};