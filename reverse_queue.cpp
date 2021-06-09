#include<iostream>
using namespace std;
#include<stack>
#include<queue>

void reverse(queue<int> &q){
    stack<int> m;
    while(!q.empty()){
        m.push(q.front());
        q.pop();
    }
    while(!m.empty()){
        q.push(m.top());
        m.pop();
    }

}

int main(){
    int size,a;
    cin>>size;
    queue<int>s;
    for(int i=0;i<size;i++){
        cin>>a;
        s.push(a);
    }
    reverse(s);
    for(int j=0;j<size;j++){
        cout<<s.front()<<" ";
        s.pop();


    }
    cout<<"\n";
    return 0;
}