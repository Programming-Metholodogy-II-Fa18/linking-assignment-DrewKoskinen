#include <iostream>
#include <string.h>
using namespace std;
template <class N>
class Node {
public:
    Node *next;
    N data;
    Node() {
        data = 0;
        next = 0;
    }

    Node(N x1, Node *x2 = 0) {
        data = x1;
        next = x2;
    }

    ~Node() {
        next = 0;
    }
};
template <class N>

class ArbitraryQueue {
N *elems;
int size;
private:
     N s[];
    int n = 0;
public:
    ArbitraryQueue(int s){
        size=s;
        elems = new N[size];
        for (int i=0; i<size;i++)
            elems[i]=0;
    }
    ~ArbitraryQueue()(){
        delete elems;
    }
    N& operator[](int index){
        return elems[index];
    }
    void operator =(N temp)
    {
        for (int i=0;i<size;i++)
            elems[i] =temp;
    }
    int front =-1;
    int rear  =-1;
    bool isEmpty(){
        return n = 0;
    }
    void Push(N item){
        if(n ==s.length)
            resize(2*s.length);
        s[n++] = item;
    }
    void resize(int capacity)
    {
        s[]= new s[capacity];
        for(int i = 0;i<n;i++)
            copy[i] = s[i];
        s=copy;
    }
    void Enqueue(int value){
        if(rear == size-1)
            cout<<"Queue is full\n";
        else
        {
            if(front ==-1)
                front =0;
            rear++;
            elems[rear]=value;


            }
        }
    void Pop(){ return s[--n];

    }
    void Dequeue(){
    }
    N traverse(int pos){

    }
void showQueue(){

    }

};
