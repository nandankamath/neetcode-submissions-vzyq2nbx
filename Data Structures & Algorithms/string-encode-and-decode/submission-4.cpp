class Solution {
public:

    string encode(vector<string>& strs) {
        string output;
        for(int i = 0; i < strs.size(); i++){
            output += to_string(strs[i].size()) + '_' + strs[i];
        }

        return output;
    }

    vector<string> decode(string s) {
        vector<string> output;
        int i = 0;
        while(i < s.length()){
            string str_len = "";
            int j = i;
            while(s[j] != '_'){
                str_len += s[j];
                j++;
            }
            int len = stoi(str_len);
            output.push_back(s.substr(j+1, len));
            i = j + len + 1;
        }
        return output;
    }
};
