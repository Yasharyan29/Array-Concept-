#include<iostream>
using namespace std;

class Employee{
    int Id;      // private 


    public:
        void setId(){
            cout<<"Enter the id of the employee"<<endl;
            cin>>Id;
        } 
        void getId(){
            cout<<"the id of this employee is: "<<Id<<endl;
        }
};

int main(){
    Employee google[4];
    for(int i=0; i<4; i++){
        google[i].setId();    
        google[i].getId();
    }

}

