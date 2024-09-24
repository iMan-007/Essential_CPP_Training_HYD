//call diff diff constructors and print// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    //Default constructor
    BankCustomer(){ } 
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg):BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        cout<<"nameArg,adharNumberArg,panNumber"<<endl;
    }
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg, string emailArg):BankCustomer(nameArg, adharNumberArg, panNumberArg){
        this->emailId=emailArg;
        cout<<"nameArg,adharNumberArg,panNumber,emailArg"<<endl;
    }
     BankCustomer(string nameArg,string adharNumberArg,string panNumberArg, string emailArg, string phoneArg):BankCustomer(nameArg, adharNumberArg, panNumberArg, emailArg){
        this->phoneNumber=phoneArg;
        cout<<"nameArg,adharNumberArg,panNumber,emailArg,phoneArg"<<endl;
    }
    void printCustomerInfo(){
            cout<<"Manikandan, 1234, 5678, mani@gmail.com,0123"<<endl;
        }

};

int main() {
    // Write C++ code here
    BankCustomer BankcustomerObj("Manikandan", "1234", "5678", "mani@gmail.com","0123");
    cout<<"Operational overloading using Delgation constructor"<<endl;
    BankcustomerObj.printCustomerInfo();
  
  
    return 0;
}