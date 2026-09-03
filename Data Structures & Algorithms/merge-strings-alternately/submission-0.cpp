class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge = "";
        int n = max(word1.size(), word2.size());
        for(int i = 0; i < n; i++){
            if(word1.size() -1 >= i){
                merge.push_back(word1[i]);
            }
            if(word2.size() -1 >=i){
                merge.push_back(word2[i]);
            }          
        }
        return merge;
    }
};