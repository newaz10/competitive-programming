#include <bits/stdc++.h>
using namespace std;

#define n 5
int t = -1;
int st[n];

bool isEmpty()
{
    if(t <= -1) {
        return true;
    }
    return false;
}

void push(int v)
{
    if(t >= (n-1)) {
        cout << "Stack Overflow!\n";
    }
    else {
        t++;
        st[t] = v;
    }
}

int pop()
{
    if(t >= (n-1)) {
        cout << "Stack Overflow!\n";
    }
    else {
        t--;
    }
    return st[t+1];
}

int top()
{
    if(t >= (n-1)) {
        cout << "Stack Overflow!\n";
    }
    else if(t <= -1) {
        cout << "Stack Underflow!\n";
    }
    else {
        return st[t];
    }
    return 0;
}

int stack_size()
{
    if(t >= (n-1)) {
        cout << "Stack Overflow!\n";
    }
    else if(t <= -1) {
        cout << "Stack Underflow!\n";
    }
    else {
        return t+1;
    }
    return 0;
}

void display()
{
    if(t >= 0) {
        cout << "Stack elements are: ";
        for(int i = 0; i <= t; i++) {
            cout << st[i] << ' ';
        }
        cout << '\n';
    }
}

int main() {
   int val;

   if(isEmpty()) {
        cout << "Empty!\n";
   }
   else {
        display();
   }
   push(1);
   push(2);
   push(3);
   display();

   if(isEmpty()) {
        cout << "Empty!\n";
   }
   else {
        display();
   }

   cout << pop() << endl;
   display();

   cout << "Top = " << top() << endl;

   push(1);
   push(1);
   cout << stack_size() << endl;
   display();

   return 0;
}
