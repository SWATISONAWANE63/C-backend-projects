#include<bits/stdc++.h>
using namespace std;
 int row=5;
 int col=5;
 int seats[5][5]={0};
void viewSeats(){
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            cout<<seats[i][j]<<"  ";
        }
        cout<<"\n";
    }}
void bookSingleSeat(){
    int r,c;
    cout<<"Enter row and column to to book : ";
    cin>>r>>c;
    if(r>=0 && r<row && c>=0&& c<col && seats[r][c]==0){
        seats[r][c]=1;
        cout<<"Seat booked successfully. \n";
      
    }else if(seats[r][c]==1){
        cout<<"Seat is already booked\n";
    }
    else{
        cout<<"Invaild number you enter. \n";
    }
}
void cancelSeatBooking(){
int r,c;
cout<<"Enter row and column to cancel booking";
cin>>r>>c;
if(r>=0 && r<row && c>=0 && c<col && seats[r][c]==1){
    seats[r][c]=0;
    cout<<"Booking cancelled\n";
}else{
    cout<<"this seat is not booked\n";
}
}
void displayAvailableSeatOnly(){
    bool found=false;
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            if(seats[i][j]==0){
                cout<<"seat (" <<i<<","<<j<<") is available\n";
                found=true;
            }
        }
    }
    if(found) cout<<"these seats are available";
    else cout<<"No seats are available.\n";
}

int main(){
    int choice;
    while(true){
    cout<<"======Cinema Seat Booking Menu========\n";
    cout<<"1.View Seat Layout\n";
    cout<<"2.Book a Single Seat\n";
    cout<<"3.Cancel a seat Booking\n";
    cout<<"4.Display Available seats only\n";
    cout<<"5.Exit\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1 : viewSeats(); break;
    case 2 :bookSingleSeat();break;
    case 3 : cancelSeatBooking(); break;
    case 4 : displayAvailableSeatOnly(); break;
    case 5: cout<<"Exiting system. Thank you!\n";
    return 0;
    }
    }

}