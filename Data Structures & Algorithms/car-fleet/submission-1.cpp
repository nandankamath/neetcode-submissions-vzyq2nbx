class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        deque<int> cont;
        vector<pair<int, double>> time_pos(position.size());

        for(int i = 0; i < position.size(); i++){
            double time = (double)(target - position[i])/speed[i];
            time_pos[i].second = time;
            time_pos[i].first = position[i];
        }

        sort(time_pos.rbegin(), time_pos.rend());

        cont.push_back(0);
        for(int i = 1; i < time_pos.size(); i++){
            if(!cont.empty() && time_pos[i].second <= time_pos[cont.back()].second){
                continue;
            }else{
                cont.push_back(i);
            }
        }

        return cont.size();

    }
};
