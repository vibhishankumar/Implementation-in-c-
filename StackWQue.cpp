#include<bits/stdc++.h>
using namespace std;
class StackWQue
{
private:
    /* data */
    //taking two queue as q1,q2 to implement Stack
    queue<int> q1,q2;
    int curr_size;
public:
    StackWQue(/* args */){curr_size=0;}
   void push(int x)
   {
       curr_size++;
       //push element into empty queue as q2
       q2.push(x);
       //push all remaining element into q2 from q1
       while (!q1.empty())
       {
           /* code */
           q2.push(q1.front());
           q1.pop();
       }
       //swap name of both queue
       queue<int> q=q1;
       q1=q2;
       q2=q;
   }
   void pop()
   {
       //if no element in q1 return
       if(q1.empty())
       {
           return ;
       }
       q1.pop();
       curr_size--;
   }
   int top()
   {
       //if q1 is empty return -1
       if(q1.empty())
       {
           return -1;
       }
       return q1.front();
   }
   int size()
   {
       return curr_size;
   }
};
//main drive
int main()
{
    StackWQue s;
    //push element into stack
    s.push(1);
    s.push(2);
    s.push(3);
    //return front and pop
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
}