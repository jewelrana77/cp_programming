#include<bits/stdc++.h>
using namespace std;
void st_insert(stack<int>&st){
int item;
cout<<"input item:";
cin>>item;
st.push(item);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<"\n";
system("pause");
}
void st_delete(stack<int>&st){
st.pop();
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<"\n";
system("pause");
}
int main(){
stack<int>st;
int n,choice;
cin>>n;
for(int i=0;i<n;++i){
    int x;
    cin>>x;
    st.push(x);
}
do{
        system("cls");
 cout<<"{----stack_menu----"<<"\n";
 cout<<" 1.insert item"<<"\n";
 cout<<" 2.delete item"<<"\n";
 cout<<" 3.exit "<<"\n";
 cout<<"choice option in stack"<<"\n";
 cin>>choice;
 switch(choice){
 case 1:
     cout<<"print the stack elements"<<"\n";
     st_insert(st);
     break;
 case 2:
     cout<<"print the stack elements"<<"\n";
     st_delete(st);
     break;

 case 3:
    exit(0);
    break;
}
}
while(1);
return 0;
}
