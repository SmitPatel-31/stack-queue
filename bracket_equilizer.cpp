#include<iostream>
#include<stack>

using namespace std;

 int min_brac(string a){
    stack<char> s;
    int n= a.size();
    for(int i=0;i<n;i++){
        if(a[i]=='{'){
            s.push(a[i]);
        }
        else if(a[i]=='}'){
            s.pop();
        }
        
        
    }
    int size =s.size();
        if(size%2==0){
            size=size/2;
        }
        else{
            return -1;
        }
    return size;
}

int main(){
   string a;
   cin>>a;
   int ans= min_brac(a);
   cout<<ans<<endl;
    
}