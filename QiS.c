#include<iostream>
using namespace std;
class stack1{
    public:
int top;
stack1(){
top=-1;
}
int arr[1000];

void push(int value){
if(top==999){
    cout<<"stack overloaded";
}
arr[++top]=value;
}
void pop(){
if(top==-1){
    cout<<"no element so can not use this function";
}
top--;
}
int topl(){
return arr[top];
}
bool isempty(){
if(top==-1){
    return true;
}
else return false;
}
void print(){
int i;
cout<<"stack element are ";
for(i=0;i<=top;i++){
    cout<<arr[i];
}
cout<<endl;
}
};
class stack2{
public:
stack2(){
int top=-1
}
stack s1;
void push(int value){
s1.push(s1.pop(value))
}
void pop(){
s1.pop();
}
};

int main(){
int i;
for(i=1;i<6;i++){
    s1.push(i);
    s1.dispaly();
}
for(i=0;i<5;i++){
    s1.pop();
    s1.dispaly();
}
return 0;
}
