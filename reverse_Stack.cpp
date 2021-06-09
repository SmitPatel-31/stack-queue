#include<iostream>
using namespace std;
#include<stack>

void reverse(stack<int> &s,stack<int> &r,int n){
    while(!s.empty()){
        int topp = s.top();
        s.pop();
        r.push(topp);

    }
    
    
}

int main(){
    int n,a;
    cin>>n;
    stack<int>s;
    stack<int>r;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push(a);

    }
    reverse(s,r,n);
    for(int j=0;j<n;j++){
        cout<<r.top()<<" ";
        r.pop();

    }
    return 0;

}