#include<bits/stdc++.h>
using namespace std;
struct ticket{
    int seat;
    bool booked;
    char name[50];
};
int main(){
    ticket t[10];

    ifstream fin("ticket.dat",ios:: binary);
    if(fin){
        fin.read((char*)t,sizeof(t));
        fin.close();
    }
    else{
        for(int i=0;i<10;i++){
            t[i].seat = i+1;
            t[i].booked = false;
            strcpy(t[i].name,"");
        }
    }
    int choice;
    do{
        cout<<"------TICKET BOOKING SYSTEM------\n1. View ticket\n2. Book ticket\n3. Cancel ticket\n4. Exit\n5. Reset\nEnter your choice : ";
        cin>>choice;
        cout<<"\n";
        switch(choice){
            case 1 :{
                for(int i=0;i<10;i++){
                    cout<<"Seat "<<t[i].seat<<(t[i].booked ? t[i].name : " Available")<<endl;
                }
                break;
            }

            case 2 :{
                cout<<"Enter seat no. : ";
                int num1;
                cin>>num1;
                cin.ignore();
                if(num1 <1 || num1>10){
                    cout<<"Seats 3not available "<<endl;
                }
                else{
                    if(t[num1-1].booked){
                        cout<<"Seat already booked \n";
                    }
                    else{
                        cout<<"Enter name : ";
                        cin.getline(t[num1-1].name,50);
                        t[num1-1].booked = true;
                        ofstream fout("ticket.dat",ios::binary);
                        fout.write((char*)t,sizeof(t));
                        fout.close();
                        cout<<"Ticket booked successfully\n";

                    }
                    
                }
                break;
            }

            case 3 :{
                cout<<"Enter seat no. : ";
                int num1;
                cin>>num1;
                if(num1 <1 || num1>10){
                    cout<<"Seats not available "<<endl;
                }
                else if(!t[num1-1].booked){
                    cout<<"Seat not reserved\n";
                }
                else{
                    t[num1-1].booked = false;
                    strcpy(t[num1-1].name,"");
                    ofstream fout("ticket.dat",ios::binary);
                    fout.write((char*)t,sizeof(t));
                    fout.close();
                    cout<<"Ticket cancelled successfully\n";

                }
                break;
            }

            case 4:{
                cout<<"Thank you\n";
                break;
            }

            case 5:{

                remove("tickets.dat");

                for(int i=0;i<10;i++){
                   t[i].seat=i+1;
                   t[i].booked=false;
                   strcpy(t[i].name,"");
                }
            }

            cout<<"All data reset successfully\n";
            break;

            default:
            cout<<"Invalid choice \n";
        }
    }while(choice != 4);
    return 0;
}
