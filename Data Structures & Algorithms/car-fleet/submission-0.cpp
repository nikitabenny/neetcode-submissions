class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.size() == 1){return 1;}
        vector<pair<int,double>>d_t;
        for(int i = 0; i < position.size(); i++){
            d_t.push_back(make_pair(target - position[i],static_cast<double>((target - position[i]))/speed[i]));

        }

        sort(d_t.begin(),d_t.end());

        int ptr = 0;
        int fleet_count = 1;
        
        double fleet_time = d_t[0].second;
        

        for(int i = 1; i < d_t.size(); i++){
            if(d_t[i].second <= fleet_time){
                continue;
            }

            else{
                fleet_time = d_t[i].second;
                fleet_count++;
            }
        }
        
        
        return fleet_count;
    }
};