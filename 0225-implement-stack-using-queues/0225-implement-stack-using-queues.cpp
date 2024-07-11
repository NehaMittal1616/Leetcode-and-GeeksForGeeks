#include<bits/stdc++.h>
using namespace std;
// stack -> LIFO LAST IN FIRST OUT
// QUEUE -> FIRST IN FIRST OUT
class MyStack {
    private: queue<int>q1,q2;
public:
    MyStack() {
    
    }
    

    void push(int x) {
     q1.push(x);
     while(!q2.empty())
     {
        q1.push(q2.front());
        q2.pop();
     }
     swap(q1,q2);
    }
    
    int pop() {
  int topelement=q2.front(); // front element of q2 will be the top of stack
   q2.pop(); 
  return topelement;
        
    }
    
    int top() {
        return q2.front(); // in this we do no have to remove the top element from the stack , we just want to return the top element 
        // so we just return the front of queue usng front()
    }
    
    bool empty() {
       if(q2.empty())
       {
        return true;

       }
       else
       {
        return false;
       }  
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */