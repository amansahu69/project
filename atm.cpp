#include<iostream>
using namespace std;
       // function for opction 
   //  for new tankjextion
        int new_tranjectiom;
         // for banalane
       float balance=0.0;

   void atm_opction(){
              cout<<"SLECTED THE OPCTION"<<endl;
           cout<<"1: for deposit the money"<<endl;
           cout<<"2: for widralwl the money"<<endl;
           cout<<"3: for check the balance"<<endl;

           cout<<endl;


           
       float widrawl_amount;
       float deposit_amount;

       int opction;

       cout<<"enter a opction:";
       cin>>opction;
       switch (opction)
       {
        // case of deposite money 
       case 1:
       cout<<"enter a amount to deposit->";
       cin>>deposit_amount;
       balance=balance+deposit_amount;
          cout<<"you dopsite->"<<deposit_amount<<endl;

       cout<<"your current  balance is-> "<<balance<<endl; 

       cout<<"you contnue the tranjextion please slected 1 for continue 0 for exit"<<endl;
       cin>>new_tranjectiom;
       if(new_tranjectiom== 1){
        atm_opction();
       }
       else{
        exit;
       }
       break;
       case 2:
       cout<<"enter a money you to widrawl->";
       cin>>widrawl_amount;
       if(widrawl_amount>balance){
        cout<<"your balance is lase than  widrawl amount"<<endl;

       } 
       balance= balance-widrawl_amount;
       cout<<"you widrawl-> "<<widrawl_amount<<endl;
       cout<<"your current balance is->"<<balance<<endl;
       
        cout<<"you contnue the tranjextion please slected 1 for continue 0 for exit"<<endl;

        cin>>new_tranjectiom;
        if(new_tranjectiom== 1){
            atm_opction();
        }
        else{
            exit;
        }
        break;
        case 3:
          
           cout<<"your balance is -> "<<balance<<endl;
            cout<<"you contnue the tranjextion please slected 1 for continue 0 for exit"<<endl;
            cin>>new_tranjectiom;

            if(new_tranjectiom== 1){
                atm_opction();
            }
            else
            {
                 exit;
            }


        
        break;
       
       default:
       cout<<"invalid option please select a valid option"<<endl;
        cout<<"you slectd only 1 for tanjction o for exit ";
        atm_opction();
        break;
       }





   }

int main(){
      
    atm_opction();

          

    return 0;

}