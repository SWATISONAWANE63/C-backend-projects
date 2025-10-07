#include <iostream>
using namespace std;
int main(){
    cout<<"Temperature Converter"<<endl;
    cout<<"1.Celsius to Fahrenheit"<<endl;
    cout<<"2.Fahrenheit to Celsius"<<endl;
    cout<<"3.Exit"<<endl;
    int choice;
    cout<<"Enter your choice";
    cin>>choice;  

    if(choice==1){
        int temp;
        cout<<"Enter the temperature you want to convert";
        cin>>temp;
        double Fah=5.0/9.0*(temp-32);
        cout<<"The temperature from fahrenheit to celsius is "<<Fah<<endl;

    }
    if(choice==2){
        int temp;
        cout<<"Enter the temperature you want to convert";
        cin>>temp;
        double cel=(temp*9.0/5.0)+32;
        cout<<"The temperature from celsius to fahrenheit is "<<cel<<endl;
    }
    if( choice==3){
        cout<<"Exiting temperature converter. \n";
         
    }
    if(choice>=4){
        cout<<"Your enter wrong input please check your input";
    }
   
   

}