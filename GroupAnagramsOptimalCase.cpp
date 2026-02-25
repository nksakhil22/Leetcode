class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapp;
        for(string s: strs){
            string key = s;
            sort(key.begin(), key.end());
            mapp[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto &p: mapp){
            result.push_back(p.second);
        }
        return result;
    }
};
