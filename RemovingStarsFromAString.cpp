class Solution {
public:
    string removeStars(string s) {
    
       vector<char> st;  
       for(char i:s){
          if(i=='*')
            st.pop_back();
          else  
            st.push_back(i);
       }  
       string op(st.begin(),st.end());
    return op;
    }
};