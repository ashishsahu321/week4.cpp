/*implementation of queue using array*/
#include<iostream>
using namespace std;
//class queue
class queue{
    public:
int top;
//constructor
queue(){
top=-1;
}
int arr[1000];
//enqueue function to enter element
void enqueue(int value){
if(top==999){
    cout<<"queue overloaded";
}
//initially at 0th position entered value
arr[++top]=value;
}
//we initially initialize the integer to zero it is necessary to dequeue element
int j=0;
void dequeue(){

if(top==-1){
    cout<<"no element so can not use this function";
}
j++;
}
//to check whether function is empty or not
bool isempty(){
if(top==-1){
    return true;
}
else return false;
}
void print(){
int i;
cout<<"queue element ";
for(i=j;i<=top;i++){
    cout<<arr[i];
}
cout<<endl;
}
};
int main(){
queue q;
for(int i=1;i<6;i++){
q.enqueue(i);
q.print();
}
for(int i=1;i<5;i++){
q.dequeue();
q.print();
}
return 0;
}
