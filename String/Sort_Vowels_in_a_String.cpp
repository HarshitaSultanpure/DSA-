class Solution {
public:
    bool isVowel(char ch)
    {
        switch(ch)
        {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    return true;
            default:
                return false;
        }
        return false;
    }
    string sortVowels(string s) {
        string temp;
        
        for(auto x : s)
        {
            if(isVowel(x))
            {
                temp+=x;
            }
        }
        
        int j=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = temp[j];
                j++;
            }
        }
        return s;
    }
};