class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> cS;
        unordered_map<char,int> cT;
        for(int i=0;i<s.length();i++){
          cS[s[i]]++;
           cT[t[i]]++;
        }
        return cS==cT;
    }
    
};
