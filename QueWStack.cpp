#include<bits/stdc++.h>
using namespace std;
struct QueWStack
{
    /* data */
    stack<int> s1,s2;
    void enQueue(int x)
    {
        //move all element from s1 to s2 until not empty
        while (!s1.empty())
        {
            /* code */
            s2.push(s1.top());
            s1.pop();
        }
        //push x into s1
        s1.push(x);
        //againg push all element from s2 to s1
        while (!s2.empty())
        {
            /* code */
            s1.push(s2.top());
            s2.pop();
        }
    }
    //dequeue
    int deQueue()
    {
        //if s1 is empty exit with massege queue is empty
        if(s1.empty())
        {
            cout<<"Q is empty "<<endl;
            exit(0);
        }
        int x=s1.top();
        s1.pop();
        return x;
    }
};
//main drive
int main()
{
    QueWStack q;
    q.enQueue(1);//push 1 into Q
    q.enQueue(2);//push 2 into Q
    q.enQueue(3); //push 3 into Q
    //return deQueue element
    cout<<q.deQueue()<<" "<<q.deQueue()<<endl;
}
