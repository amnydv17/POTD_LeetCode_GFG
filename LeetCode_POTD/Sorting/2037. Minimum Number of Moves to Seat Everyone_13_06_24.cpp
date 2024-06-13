class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=seats.size();
        
        vector<int>pos_seat(101,0);
        vector<int>pos_stud(101,0);
        
        for(int &pos : seats)
        {
            pos_seat[pos]++;
        }
        
        for(int &pos : students)
        {
            pos_stud[pos]++;
        }
        
        int i = 0, j = 0;
        int moves = 0;
        
        while(i<=100 && j<=100)
        {
            if(pos_seat[i]==0) i++;
            if(pos_stud[j]==0) j++;
            
            if(i<=100 && j<=100 && pos_seat[i]!=0 && pos_stud[j] != 0)
            {
                moves += abs(i-j);
                pos_seat[i]--;
                pos_stud[j]--;
            }
        }
    return moves;
    }
};