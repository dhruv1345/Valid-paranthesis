class Solution {
public:
    
    bool matches(char a, char b){
        if(a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']')
            return true;
        else{return false;}
    }
    
    bool isValid(string s) {
        int i=0;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];

            if(ch=='{' || ch=='(' || ch=='['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char top=st.top();
                    if(matches(top,ch)){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
