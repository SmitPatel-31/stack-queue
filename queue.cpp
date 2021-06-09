#include<iostream>
using namespace std;
template<typename T>

class queue{
    T *data;
    int ni;
    int fi;
    int size;
    int capacity;

    public:
    queue(int s){
        data = new T[s];
        ni=0;
        fi=-1;
        size=0;
        capacity=s;

    }
    int getsize(){
        return size;
    }
    int is_empty(){
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"Queue is Full..!";
            return; 
        }
        data[ni] = element;
        size =size+1;
        ni=(ni+1)%capacity;
        if(fi==-1){
            fi=0;
        }
        
    }
    T dequeue(){
        if(size ==0){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        T ans=data[fi];
        fi=(fi+1)%capacity;
        size=size-1;
        if(size==0){
            fi=-1;
            ni=0;
        }
        return ans;

    }
    T front(){
        if(is_empty()){
            cout<<"queue is Empty"<<endl;
            return 0;

        }
        return data[fi];
    }

};

int main(){
    queue<int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    q.dequeue();
    q.dequeue();
    q.enqueue(60);
    cout<<q.getsize()<<endl;

}