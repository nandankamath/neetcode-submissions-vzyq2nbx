class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        deque<int> cont;
        vector<int> out(temperatures.size());

        //int j = 0; //top of stack index.
        cont.push_back(0);
        for(int i = 1; i < temperatures.size(); i++){
            if(temperatures[i-1] >= temperatures[i]){
                cont.push_back(i);
                //j++;
            }else{
                while(!cont.empty() && temperatures[i] > temperatures[cont.back()]){
                    out[cont.back()] = i - cont.back();
                    cont.pop_back();
                    //j--;
                }
                
                cont.push_back(i);
            }

        }

        while(!cont.empty()){
            out[cont.back()] = 0;
            cont.pop_back();
        }
        return out;
        
    }
};
