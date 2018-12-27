//ATM Simulator 2.0
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int money;
    char init;
    char acc;
    char opt;
    int tran;
    start:
    cout <<"Welcome to the ATM Simulator 2.0 \n " <<endl;
    cout <<" Press P to use the ATM and E to exit" <<endl;
      cin >> init ;
      init = toupper(init);
        if(init == 'P' ){
       cout << "Fill an initial amount between Rs.100 to Rs.200000" <<endl;
       cin >> money ;
        cout << "Welcome to Bambah Bank \n"<<endl;
        cout << "Press S for savings account."<<endl;
        cout << "Press C for current account."<<endl;
            cin >> acc;
            acc = tolower(acc);
                if (acc == 's'){
                cout << "-------- SAVINGS ACCOUNT --------"<<endl;
                cout << "Press T for transaction and R for mini slip."<<endl;
                    cin >> opt;
                    opt == tolower(opt);
                            Transaction :
                            if (opt == 't'){
                               cout << "Enter amount you want to transact.(Multiples of 100)"<<endl;
                               cin >> tran;
                                    if (tran <= money && tran %100 == 0){
                                        cout << "Your transaction is processing... \n" <<endl;
                                        cout << "Your Transaction was successful." <<endl;
                                        cout << "Want to use the simulator again?" <<endl;
                                        cout << ".......Press P to use again or any other key to exit." <<endl;
                                        cin >> init;
                                        init = tolower(init);
                                        if (init == 'p'){
                                                    goto start;
                                        }else {
                                         return 0;
                                        }
                                    } else {
                                    cout << "Entered amount of money is not applicable. \n"<<endl;
                                    cout << "Please enter an amount less than" + money <<endl;
                                    goto Transaction;
                                    }

                            }
                            else if (opt == 'r') {
                                    cout<<endl<<endl<<endl<<endl;
                                cout <<"Money in your account:" << money<<endl<<endl<<endl;
                                 cout << "Want to use the simulator again?" <<endl;
                                        cout << ".......Press P to use again or any other key to exit." <<endl;
                                        cin >> init;
                                        init = tolower(init);
                                        if (init == 'p'){
                                                    goto start;
                                        }else {
                                         return 0;
                                        }
                            }
                            else {
                                cout<<"Sorry , that option does not exist"<<endl;
                            }
                }
                else if (acc == 'c') {
                                cout<<"-------- CURRENT ACCOUNT --------"<<endl;
                                cout << "Press T for transaction and R for mini slip."<<endl;
                                cin >> opt;
                                opt == tolower(opt);
                          Transact:
                            if (opt == 't'){
                                cout << "Enter amount you want to transact(Multiples of 100)."<<endl;
                               cin >> tran;
                                    if (tran <= money && tran %100 == 0){
                                        cout << "Your transaction is processing... \n" <<endl;
                                        cout << "Your Transaction was successful." <<endl;
                                        cout << "Want to use the simulator again?" <<endl;
                                        cout << ".......Press P to use again or any other key to exit." <<endl;
                                        cin >> init;
                                        init = tolower(init);
                                        if (init == 'p'){
                                                    goto start;
                                        }else  {
                                         return 0;
                                        }
                                    } else {
                                    cout << "Entered amount of money is not applicable. \n"<<endl;
                                    cout << "Please enter an amount less than" + money <<endl;
                                    goto Transact;
                                    }
                            }
                            else if (opt == 'r') {
                                 cout<<endl<<endl<<endl<<endl;
                                cout <<"Money in your account:" << money<<endl<<endl<<endl;
                                 cout << "Want to use the simulator again?" <<endl;
                                        cout << ".......Press P to use again or any other key to exit." <<endl;
                                        cin >> init;
                                        init = tolower(init);
                                        if (init == 'p'){
                                                    goto start;
                                        }else {
                                         return 0;
                                        }
                            }
                            else {
                                cout<<"Sorry , that option does not exist"<<endl;
                            }

                }
                else {
                    cout<<"Sorry , that option does not exist"<<endl;
                }
        }
        else if (init == 'E' ){
             return 0;
        }
        else{
             cout<<"Sorry , that option does not exist"<<endl;
        }
 //Basic copyright
 cout << "Copyright (C) 2018-19 NeozVBambah"<<endl;
}
