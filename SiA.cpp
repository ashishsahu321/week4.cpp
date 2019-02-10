#include<iostream>
using namespace std;
class stack{
    public:
int top;
stack(){
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
void topelement(){
cout<<arr[top];
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
int main(){
stack s;
s.push(1);
s.print();
s.topelement();
return 0;
}
