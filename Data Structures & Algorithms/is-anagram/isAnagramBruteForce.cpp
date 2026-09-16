class Solution {
public:
    bool isAnagram(string s, string t) {
    
    //check to make sure they are the same length first
        if(s.length() != t.length())
        {
            return false;
        }

    //return if strings are the same
       sort(s.begin(), s.end());
       sort(t.begin(), t.end());
       return s == t;
    }
};
