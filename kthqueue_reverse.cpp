#include<iostream>
using namespace std;
#include<stack>
#include<queue>

void kthreverse(queue<int> &q,int k){
    stack<int> s;
    queue<int>q2;
    int count=0;
    while(!q.empty()){
        if(count !=k){
            s.push(q.front());
            q.pop();
            count++;
        }
        else{
            q2.push(q.front());
            q.pop();
        }
    }
    
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
    }

}

int main(){
    int n,a,k;
    cin>>n;
    cin>>k;
    queue<int>q;
    for(int i=0;i<n;i++){
        cin>>a;
        q.push(a);
    }
    kthreverse(q,k);
    for(int j=0;j<n;j++){
        cout<<q.front()<<" ";
        q.pop();


    }
    cout<<"\n";
    return 0;
}