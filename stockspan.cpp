#include <iostream>
using namespace std;
#include <stack>
    //Function to calculate the span of stockâ€™s price for all n days.
    void  calculateSpan(int price[], int n,int s[])
    {

      
      stack<int> s1;
      for(int i=0;i<n;i++){
          int curr= price[i];
          while(!s1.empty() && price[s1.top()]<=curr){
              s1.pop();
          }
          if(s1.empty()){
              s[i]=i+1;
          }
          else{
              s[i]=i-s1.top();
          }
          s1.push(i);
      }
    }
    

int main(){
    int price[500],n;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>price[j];
    }
    int s[500];
    calculateSpan(price,n,s);
    for(int k=0;k<n;k++){
        cout<<s[k]<<" ";
    }
    return 0;
}