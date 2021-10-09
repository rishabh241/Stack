#include<iostream>
using namespace std;
struct stack{
int size;
int top;
int *s;
};
void Display(stack st){
    for(int i=st.top;i>=0;i--){
        cout<<st.s[i]<<" ";
    }cout<<endl;
}
void push(stack *st,int x){
if(st->top==st->size-1){
    cout<<"Stack is overflowed"<<endl;
}else{
st->top++;
st->s[st->top]=x;
}
}
int pop(stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack is Empty"<<endl;
    }else{
        
        x=st->s[st->top];
        st->top--;
    }return x;
}
int peak(struct stack st,int index){
    // int x=-1;
    if(st.top-index+1<0){
        cout<<"Stack is empty"<<endl;
    }else{
        return st.s[st.top-index+1];
    }return -1;
}

int main(){
    struct stack st;
    cout<<"Enter the size of stack"<<endl;
    st.size=5;
    st.s=new int[st.size];
    st.top=-1;
    push(&st,15);
    push(&st,25);
    push(&st,75);
    cout<<peak(st,3)<<endl;
    Display(st);
    cout<<pop(&st)<<endl;
    return 0;

}