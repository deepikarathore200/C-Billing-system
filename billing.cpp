#include<iostream>                                       //header file

using namespace std;                                    //define standards

int main(){                                            //main method
    int returTotalBill(void);                          //whenever we make method we have to make prototype, because the method takes takes nothing we pass void 
    int totalBill=returTotalBill();                    //method call with variable total bill
    cout<<"Your total Bill Amount is "<<totalBill<<endl;
    cout<<"Thank you for you order !"<<endl;
}

int returTotalBill(){                                //make method
    char c;                                          //variable to check start
    char item;                                       //variable to check item type
    char vegItem;                                   //variable to check veg item type
    int billAmount=0;                               //variable for item amount
    char selectAgain;                               //variable to check start again
    char nonvegItem;                                //variable to check non-veg item type 
    cout<<"----------------Welcome to Online Food Order--------------"<<endl;       //endl to endl and print next message in next line
    cout<<"--------------Please follow below instructions-----------"<<endl;
    cout<<"Step 1 : Please press s to start your order"<<endl;
    cout<<"Step 2 : You can order both veg and nonveg item"<<endl;
    cout<<"Step 3 : Please press a to select veg item"<<endl;
    cout<<"Step 4 : Please press b to select noveg item"<<endl;
    cout<<"Step 5 : You will get your final Bill after your order"<<endl;
    start:                                                                      //declare lable for goto if variable not equal to start
    cin>>c;                                                                     // take input to start
    if(c=='s' || c=='S'){                                                      //check if variable = to start
        items:                                                                 //declare lable for goto if want to select again
        cout<<"Please select your choice"<<endl;            
        cout<<"(a)Veg Items                (b)Non Veg Items"<<endl;         
        cin>>item;                                                          //take input for veglistitem
        if(item=='a' || item=='A'){                                         //check if item=veg
            vegItemList:                                                   //label for goto, if want to order more from veg
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;   //list of non-veg item
            cout<<"(1) Paneer : Price : Rs-250"<<endl;
            cout<<"(2) Burger : Price : Rs-50"<<endl;
            cout<<"(3) Pizza : Price :  Rs-100"<<endl;
            cout<<"(4) Chowmin : Price : Rs-150"<<endl;
            cout<<"(5) Veg Roll : Price : Rs-100"<<endl;
            cin>>vegItem;                               //variable for veg selected item
            if(vegItem=='1'){                          //check check what item is selected
                billAmount=billAmount+250;              //define billAmount by adding in previous selected item 
            }
            else if(vegItem=='2'){
                billAmount=billAmount+50;
            }
            else if(vegItem=='3'){
                billAmount=billAmount+100;
            }
            else if(vegItem=='4'){
                billAmount=billAmount+150;
            }
             else if(vegItem=='5'){
                billAmount=billAmount+100;
            }
            else{
                cout<<"You have entered wrong value,please try again!"<<endl;
                goto vegItemList;                                               //if entered value is wrong then again veg item list will appere 
            }
          cout<<"Do you want to add more items, y or n?"<<endl;                 //message if want to add more item
          cin>>selectAgain;                                                    //variable for if want to add more item
          if(selectAgain=='y'){                                                 //check statement 
              goto items;                                                       //if want to add more item and select = y then item option veg, non-veg will appere
          }
          else{                                                                 /*if othere then y key is pressed or dont want to add item
              return billAmount;                                                then bill will be returned*/
          }
        }
        else if(item=='b' || item=='B'){                                         //check if item=non-veg
           nonvegItemList:                                                       //label for goto, if want to order more from non-veg
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;        //list off items and their price
            cout<<"(1) Chicken : Price : Rs-350"<<endl;
            cout<<"(2) Burger : Price : Rs-100"<<endl;
            cout<<"(3) Pizza : Price :  Rs-150"<<endl;
            cout<<"(4) Chowmin : Price : Rs-200"<<endl;
            cout<<"(5) Non Veg Roll : Price : Rs-200"<<endl;
            cin>>nonvegItem;                                                         //variable for non veg item select                        
            if(nonvegItem=='1'){                                                     // check what non-veg item is selected
                billAmount=billAmount+350;                                           //define billAmount by adding in previous selected item 
            }
            else if(nonvegItem=='2'){
                billAmount=billAmount+100;
            }
            else if(nonvegItem=='3'){
                billAmount=billAmount+150;
            }
            else if(nonvegItem=='4'){
                billAmount=billAmount+200;
            }
             else if(nonvegItem=='5'){
                billAmount=billAmount+200;
            }
            else{
                cout<<"You have entered wrong value,please try again!"<<endl;           
                goto nonvegItemList;                                                //if entered value is wrong then again non-veg item list will ve provided
            }
          cout<<"Do you want to add more items, y or n?"<<endl;                     //message if want to add more item
          cin>>selectAgain;                                                         //variable for if want to add more item
          if(selectAgain=='y'){                                                     //check statement
              goto items;                                                           //if want to add more item and select = y then item option veg, non-veg will appere
          }
          else{                                                                     /*if othere then y key is pressed or dont want to add item
              return billAmount;                                                    then bill will be returned*/
          }

        }
        else{                                                                       //check statement if other than a, b(veg non-veg value) is entered
          cout<<"You have entered wrong value,please try again!"<<endl;
          goto items;                                                                //then item option list will appere       
        }

    }
    else{                                                                            //check statement if other the c(start key) is entered
        cout<<"You have entered wrong value, please press s!"<<endl;
        goto start;                                                                     //then again start message will appere asking for right ky
    }

   return billAmount;                                                                //return for the method
}
