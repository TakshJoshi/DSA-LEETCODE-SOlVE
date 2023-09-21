class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if (n1!=n2){
          return 0;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
 
    // Compare sorted strings
        for (int i = 0; i < n1; i++)
            if (s[i] != t[i])
              return 0;
 
        return 1;

    }
};
