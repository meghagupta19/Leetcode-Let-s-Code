class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        int c=1;
        for(int i=0;i<score.size();i++)
        {
            pq.push({score[i],i});
        }
        vector<string>v(pq.size(),"");
        while(!pq.empty())
        {
            int p=pq.top().second;
            if(c==1)
                v[p]="Gold Medal";
            else if(c==2)
                v[p]="Silver Medal";
            else if(c==3)
                v[p]="Bronze Medal";               
            else v[p]=to_string(c);
            c++;
            pq.pop();
        }
        return v;
    }
};