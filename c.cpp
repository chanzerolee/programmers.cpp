#include<iostream>
#include<string>
using namespace std;
class Person{
string name;
public:
Person(string name){
  this->name=name;
}
string getName(){
  return name;
}
void givename(string name){
  this->name=name;
}
};
class Family{
Person *p;
int size;
public:
Family(string name,int size){
 p=new Person(p[size]);
}
void setName(int a,string b){
  p[a].givename(b);
}
void show(){
  cout<<"Simpson의 가족은 다음고 같이 "<<size<<"명 입니다\n";
  for(int i=0;i<size;i++)
    cout<<p[i].getName()<<"   ";
}
~Family(){
  delete []p;
};
};
int main(){
  Family *simpson=new Family("Simpson",3);
  simpson->setName(0,"Mr. Simpson");
  simpson->setName(1,"Mrs. Simpson");
  simpson->setName(2,"Bart Simpson");
  simpson->show();
  delete simpson;
}
