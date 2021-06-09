#include <iostream>
#include <stack>
using namespace std;

bool checker(string s){
    stack<char> stk;
    for (int i=0;s[i]!='\0';i++){
        char ch =s[i];
        if(ch=="("){
            stk.push(ch);
        }
        else if(ch==')'){
            if(stk.empty() || stk.top() !='('){
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}

int main(){
    string str;
    cin>>str;
    cout<<checker(str)<<endl;
    
    }
