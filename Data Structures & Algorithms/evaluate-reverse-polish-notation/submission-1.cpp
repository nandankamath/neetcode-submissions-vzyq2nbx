class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        deque<int> cont;

        for(int i = 0; i < tokens.size(); i++){
            
            if(tokens[i] == "+"){
                int temp1,temp2;
                temp1 = cont.back();
                cont.pop_back();
                temp2 = cont.back();
                cont.pop_back();
                cont.push_back(temp1+temp2);

            } else if(tokens[i] == "-"){
                int temp1,temp2;
                temp1 = cont.back();
                cont.pop_back();
                temp2 = cont.back();
                cont.pop_back();
                cont.push_back(temp2-temp1);

            }else if(tokens[i] == "*"){
                int temp1,temp2;
                temp1 = cont.back();
                cont.pop_back();
                temp2 = cont.back();
                cont.pop_back();
                cont.push_back(temp1*temp2);

            }else if( tokens[i] == "/"){
                int temp1,temp2;
                temp1 = cont.back();
                cont.pop_back();
                temp2 = cont.back();
                cont.pop_back();
                cont.push_back(temp2/temp1);

            }else{
                cont.push_back(stoi(tokens[i]));
            }
        }

        return cont.back();
    }
};
