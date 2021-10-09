#include<iostream>
using namespace std;
class link{
    public:
int data;
link *next;
};
class stack{
    link *top=nullptr;
public:
void display(){
    link *p;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }cout<<endl;
}
void push(int x){
    link *t= new link;
    if(t==nullptr){
        cout<<"Stack is overflowe"<<endl;
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop(){
    link *t=new link;
    int x=-1;
    if(t==nullptr){
        cout<<"Stack is empty"<<endl;
    }else{
        // link *t=new link;
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
};
int main(){
    class stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    cout<<"deleted element is"<<st.pop()<<endl;
    st.display();
    return 0;
}