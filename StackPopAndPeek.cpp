#include <bits/stdc++.h> 

using namespace std; 

#define MAX 1000 

class StackPekPoP { 
	int top; 

public: 
	int arr[MAX]; // Maximum size of Stack 

	StackPekPoP() { top = -1; } 
    //method declaration
	bool push(int x); 
	int pop(); 
	int peek(); 
	bool isEmpty(); 
}; 
// inserting elemenet to stack
bool StackPekPoP::push(int x) 
{ 
	if (top >= (MAX - 1)) { 
		cout << "Stack Overflow "; 
		return false; 
	} 
	else { 
		arr[++top] = x; 
		cout << x << " pushed into stack\n"; 
		return true; 
	} 
} 
//pop method
int StackPekPoP::pop() 
{ 
    //if top varible ==-1 means stack is empty
	if (top < 0) { 
		cout << "Stack Underflow "; 
		return 0; 
	} 
	else { 
		int x = arr[top--]; 
		return x; 
	} 
} 
//peek method
int StackPekPoP::peek() 
{ 
	if (top < 0) { 
		cout << "Stack is Empty  :"; 
		return 0; 
	} 
	else { 
		int x = arr[top]; 
		return x; 
	} 
} 
//to check stack is empty
bool StackPekPoP::isEmpty() 
{ 
	return (top < 0); 
} 
// main drive 
int main() 
{ 
    StackPekPoP s; 
    cout<<"enter 1 for push element"<<endl;
    cout<<"enter 2 for peek element"<<endl;
    cout<<"enter 3 for pop element"<<endl;
    cout<<"enter 4 for qite"<<endl;
    
    while (1)
    {
        cout<<"enter your choice for stack"<<endl;
        int ch;
        cin>>ch;
        switch (ch)
        {
        case 1:
             int n;
             cout<<"enter element into stack"<<endl;
             cin>>n;
             s.push(n);
            break;
        case 2:
        cout<<"elements peeked is : ";
             cout<<s.peek()<<endl;
             break;
        case 3:
        cout<<"Poped elements are : "<<s.pop()<<endl;
        break;
        case 4:
        exit(1);
        break; 
        default:
          cout<<"you have enter wrong option"<<endl;
           exit(1);
            break;
        }    
        
    }
	return 0; 
} 
