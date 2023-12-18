bool matches(char top,char ch){
    if(top == '(' && ch==')' )return true;
    if(top == '[' && ch==']' )return true;
    if(top == '{' && ch=='}' )return true;
    return false;
}

bool isValidParenthesis(string s)
{
    stack<char> stchar;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        // check if its a opening Parentheses puch into the stack
        if(ch == '{' || ch == '(' || ch == '['){
            stchar.push(ch);
        }else{
            // for closing bracket check the top
            if(!stchar.empty()){
                char top = stchar.top();
                if(matches(top,ch)){
                    stchar.pop();
                }else{
                    return 0;
                }
            }
            else{
                return 0;
            }
        }
    }
    if(stchar.empty()){
        return true;
    }else{
        return false;
    }
}