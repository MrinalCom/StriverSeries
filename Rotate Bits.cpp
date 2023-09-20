vector <int> rotate (int n, int d)
        {
            vector <int> ans;
            
            d = d%16;
            
            ans.push_back(((n<<d)|(n>>(16-d)))&((1<<16)-1));
            ans.push_back(((n>>d)|(n<<(16-d)))&((1<<16)-1));
            
            return ans;
        }
