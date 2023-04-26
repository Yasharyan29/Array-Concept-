# Array-Concept-Cpp
Through this repository I explained how the Arrays concept works.

//1st part 
/*this code will help you to understand what is an array and how does it is actually work*/
#include<iostream>
using namespace std;

int main(){

// 1st type 
    int mathmark[4];
    mathmark[0] = 343;
    mathmark[1] = 4888;
    mathmark[2] = 233;
    mathmark[3] = 599;

    cout<<"these are math marks"<<endl;
    cout<<mathmark[0]<<endl;
    cout<<mathmark[1]<<endl;
    cout<<mathmark[2]<<endl;
    cout<<mathmark[3]<<endl;

//2nd type 
    int marks[4]= {23, 45,56,89};
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    
    for(int i=0; i<4; i++)
    {
        cout<<"the value of marks "<<i<<" is: "<<marks[i]<<endl;
    }

    return 0;

}

//2nd part 
// array of objects 
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



