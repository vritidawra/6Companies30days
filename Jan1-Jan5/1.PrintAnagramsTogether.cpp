vector<vector<string> > Anagrams(vector<string>& s) {
        vector<vector<string>> v;
        map<string,vector<string>> m;
        
        for(int i=0;i<s.size();i++)
        {
            string temp=s[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(s[i]);
        }
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
        
    }
