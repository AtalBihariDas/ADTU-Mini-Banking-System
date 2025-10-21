#include <iostream>
using namespace std;

int main() {

    cout << "===Welcome to SBI Bank===\n" << endl;
    int Acc_num;

    cout << "Enter your Account number:  ";
    cin >> Acc_num;

    while (Acc_num != 202528036 && Acc_num != 202528051 && Acc_num != 202528024 &&
       Acc_num != 202528037 && Acc_num != 202528042 && Acc_num != 202528025) {
        cout << "Enter valid Acc_num: ";
        cin >> Acc_num;

       }

    if (Acc_num == 202528036) {
        cout<<"WELCOME MR. ABED"<<endl;
        string pin_stored1 = "1010";
        string pin1;
        cout << "Enter your pin:  ";
        pin1 = pin_stored1;
        cin >> pin1;


        while (pin1 != pin_stored1) {
            cout<<"Access Denied!! Wrong pin"<<endl;
            cout << "Enter valid pin:  ";
            cin >> pin1;
        }

        int choice1;
        int balance1 = 1000;
        string enteredPin1;
        string newpin1;
        int amount1;
        cout << "Access Granted !!!\n";
        cout << "======Welcome======\n"<<endl;

        while(choice1 != 5) {
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4.Change Pin\n";
            cout << "5. Exit\n";
            cout << "Enter your choice:  ";
            cin >> choice1;

            switch(choice1) {
                case 1:
                    if (balance1 == 0) {
                        cout<<"Not available.."<<endl;
                    }
                    cout << "Your current balance is: Rs. " << balance1 << endl;
                    break;

                case 2:
                    cout << "Enter amount to deposit: Rs. ";
                    cin >> amount1;
                    if(amount1 > 0) {
                        balance1 += amount1;
                        cout << " Successfully deposited Rs. " << amount1 << endl;
                    } else {
                        cout << " Invalid amount.\n";
                    }
                    break;

                case 3:
                    cout << "Enter amount to withdraw: Rs. ";
                    cin >> amount1;

                    cout << "Enter you four digit pin :";
                    cin >> enteredPin1;

                    while (enteredPin1 != pin1) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> enteredPin1;
                    }

                    if(amount1 > 0 and amount1 <= balance1) {
                        balance1 -= amount1;
                        cout << "Please collect your cash.\n";
                        cout << "Your current balance is: Rs. " << balance1 << endl;
                    } else if(amount1 > balance1) {
                        cout << "Insufficient balance.\n";
                    } else {
                        cout << "Invalid amount.\n";
                    }
                    break;

                case 4:
                    cout << "Enter new pin";
                    cin >> newpin1;
                    pin_stored1 = newpin1;
                    newpin1 = pin_stored1;

                        cout << "Please, enter a valid four digit pin  : \n" << endl;
                        cin>>newpin1;
                        if(newpin1.length() == 4){
                    

                    cout << "Pin updated successfully\n";}
                    else{
                        cout<<"Error!!"<<endl;
                    }
                    cout << "Enter your new pin to continue:  \n";
                    cin >> pin_stored1;

                    while (pin_stored1 != newpin1) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> pin_stored1;
                    }
                    break;

                case 5:
                    cout << "Thank you for using the ATM. Goodbye!\n";
                    break;

                default:
                    cout << "invalid\n";
            }
        }
    }
    else if (Acc_num == 202528051) {
        cout<<"WELCOME MR. ATAL"<<endl;
        string pin_stored2 = "1243";
        string pin2;
        cout << "Enter your pin: ";
        cin >> pin2;

        while (pin2 != pin_stored2) {
            cout<<"Access Denied!! Wrong pin"<<endl;
            cout << "Enter valid pin: ";
            cin >> pin2;
        }
        int choice2;
        int balance2 = 2500;
        string enteredPin2;
        string newpin2;
        int amount2;

        cout << "Access Granted !!!\n";
        cout << "======Welcome======\n"<<endl;

        while(choice2 != 5) {
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4.Change Pin\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice2;

            switch(choice2){
                case 1:
                    if (balance2 == 0) {
                        cout<<"Not available.."<<endl;
                    }
                    cout << "Your current balance is: Rs. " << balance2 << endl;
                    break;

                case 2:
                    cout << "Enter amount to deposit: Rs. ";
                    cin >> amount2;
                    if(amount2 > 0) {
                        balance2 += amount2;
                        cout << " Successfully deposited Rs. " << amount2 << endl;
                    } else {
                        cout << " Invalid amount.\n";
                    }
                    break;

                case 3:
                    cout << "Enter amount to withdraw: Rs. ";
                    cin >> amount2;

                    cout << "Enter you four digit pin :";
                    cin >> enteredPin2;

                    while (enteredPin2 != pin2) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> enteredPin2;
                    }

                    if(amount2 > 0 and amount2 <= balance2) {
                        balance2 -= amount2;
                        cout << "Please collect your cash.\n";
                        cout << "Your current balance is: Rs. " << balance2 << endl;
                    } else if(amount2 > balance2) {
                        cout << "Insufficient balance.\n";
                    } else {
                        cout << "Invalid amount.\n";
                    }
                    break;

                case 4:
                    cout << "Enter new pin";
                    cin >> newpin2;
                    pin_stored2 = newpin2;

                    if(newpin2.length() == 4){
                    

                    cout << "Pin updated successfully\n";}
                    else{
                        cout<<"Error!!"<<endl;
                    }
                    cout << "Enter your new pin to continue:  \n";
                    cin >> pin_stored2;

                    while (pin_stored2 != newpin2) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> pin_stored2;
                    }
                    break;

                case 5:
                    cout << "Thank you for using the ATM. Goodbye!\n";
                    break;

                default:
                    cout << "invalid\n";
            }
        }

    }
    else if (Acc_num == 202528024) {
        cout<<"WELCOME MR. NADIM"<<endl;
        string pin_stored3 = "6354";
        string pin3;
        cout << "Enter your pin: ";
        cin >> pin3;

        while (pin3 != pin_stored3) {
            cout<<"Access Denied!! Wrong pin"<<endl;
            cout << "Enter valid pin: ";
            cin >> pin3;
        }

        int choice3;
        int balance3 = 3000;
        string enteredPin3;
        string newpin3;
        int amount3;

        cout << "Access Granted !!!\n";
        cout << "======Welcome======\n"<<endl;

        while(choice3 != 5) {
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4.Change Pin\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice3;

            switch(choice3) {
                case 1:
                    if (balance3 == 0) {
                        cout<<"Not available.."<<endl;
                    }
                    cout << "Your current balance is: Rs. " << balance3 << endl;
                    break;

                case 2:
                    cout << "Enter amount to deposit: Rs. ";
                    cin >> amount3;
                    if(amount3 > 0) {
                        balance3 += amount3;
                        cout << " Successfully deposited Rs. " << amount3 << endl;
                    } else {
                        cout << " Invalid amount.\n";
                    }
                    break;

                case 3:
                    cout << "Enter amount to withdraw: Rs. ";
                    cin >> amount3;

                    cout << "Enter you four digit pin :";
                    cin >> enteredPin3;

                    while (enteredPin3 != pin3) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> enteredPin3;
                    }

                    if(amount3 > 0 and amount3 <= balance3) {
                        balance3 -= amount3;
                        cout << "Please collect your cash.\n";
                        cout << "Your current balance is: Rs. " << balance3 << endl;
                    } else if(amount3 > balance3) {
                        cout << "Insufficient balance.\n";
                    } else {
                        cout << "Invalid amount.\n";
                    }
                    break;

                case 4:
                    cout << "Enter new pin";
                    cin >> newpin3;
                    pin_stored3 = newpin3;

                    if(newpin3.length() == 4){
                    

                    cout << "Pin updated successfully\n";}
                    else{
                        cout<<"Error!!"<<endl;
                    }
                    cout << "Enter your new pin to continue:  \n";
                    cin >> pin_stored3;

                    while (pin_stored3 != newpin3) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> pin_stored3;
                    }
                    break;

                case 5:
                    cout << "Thank you for using the ATM. Goodbye!\n";
                    break;

                default:
                    cout << "invalid\n";
            }
        }

    }
    else if (Acc_num == 202528037) {
        cout<<"WELCOME MR. NAITIK"<<endl;
        string pin_stored4 = "9687";
        string pin4;
        cout << "Enter your pin: ";
        cin >> pin4;

        while (pin4 != pin_stored4) {
            cout<<"Access Denied!! Wrong pin"<<endl;
            cout << "Enter valid pin: ";
            cin >> pin4;
        }

        int choice4;
        int balance4 = 9900;
        string enteredPin4;
        string newpin4;
        int amount4;

        cout << "Access Granted !!!\n";
        cout << "======Welcome======\n"<<endl;

        while(choice4 != 5) {
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4.Change Pin\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice4;

            switch(choice4) {
                case 1:
                    if (balance4 == 0) {
                        cout<<"Not available.."<<endl;
                    }
                    cout << "Your current balance is: Rs. " << balance4 << endl;
                    break;

                case 2:
                    cout << "Enter amount to deposit: Rs. ";
                    cin >> amount4;
                    if(amount4 > 0) {
                        balance4 += amount4;
                        cout << " Successfully deposited Rs. " << amount4 << endl;
                    } else {
                        cout << " Invalid amount.\n";
                    }
                    break;

                case 3:
                    cout << "Enter amount to withdraw: Rs. ";
                    cin >> amount4;

                    cout << "Enter you four digit pin :";
                    cin >> enteredPin4;

                    while (enteredPin4 != pin4) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> enteredPin4;
                    }

                    if(amount4 > 0 and amount4 <= balance4) {
                        balance4 -= amount4;
                        cout << "Please collect your cash.\n";
                        cout << "Your current balance is: Rs. " << balance4 << endl;
                    } else if(amount4 > balance4) {
                        cout << "Insufficient balance.\n";
                    } else {
                        cout << "Invalid amount.\n";
                    }
                    break;

                case 4:
                    cout << "Enter new pin";
                    cin >> newpin4;
                    pin_stored4 = newpin4;

                    if(newpin4.length() == 4){
                    

                    cout << "Pin updated successfully\n";}
                    else{
                        cout<<"Error!!"<<endl;
                    }
                    cout << "Enter your new pin to continue:  \n";
                    cin >> pin_stored4;

                    while (pin_stored4 != newpin4) {
                        cout << "Invalid pin\n";
                        cout << "Re-enter your pin again: "<<endl;
                        cin >> pin_stored4;
                    }

                case 5:
                    cout << "Thank you for using the ATM. Goodbye!\n";
                    break;

                default:
                    cout << "invalid\n";
            }
        }

    }
    else if (Acc_num == 202528042) {
        cout<<"WELCOME MR. ABHRANEEL"<<endl;
        string pin_stored5 = "6009";
        string pin5;
        cout << "Enter your pin: ";
        cin >> pin5;
        while (pin5 != pin_stored5) {
            cout<<"Access Denied!! Wrong pin"<<endl;
            cout << "Enter valid pin: ";
            cin >> pin5;
        }
        int choice5;
        int balance5 = 1500;
        string enteredPin5;
        string newpin5;
        int amount5;

        cout << "Access Granted !!!\n";
    cout << "======Welcome======\n"<<endl;

    while(choice5 != 5) {
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4.Change Pin\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice5;

        switch(choice5) {
            case 1:
                if (balance5 == 0) {
                    cout<<"Not available.."<<endl;
                }
                cout << "Your current balance is: Rs. " << balance5 << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount5;
                if(amount5 > 0) {
                    balance5 += amount5;
                    cout << " Successfully deposited Rs. " << amount5 << endl;
                } else {
                    cout << " Invalid amount.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount5;

                cout << "Enter you four digit pin :";
                cin >> enteredPin5;

                while (enteredPin5 != pin5) {
                        cout << "Invalid pin\n";
                    cout << "Re-enter your pin again: "<<endl;
                    cin >> enteredPin5;
                }

                if(amount5 > 0 and amount5 <= balance5) {
                    balance5 -= amount5;
                    cout << "Please collect your cash.\n";
                    cout << "Your current balance is: Rs. " << balance5 << endl;
                } else if(amount5 > balance5) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;

            case 4:
                cout << "Enter new pin";
                cin >> newpin5;
                pin_stored5 = newpin5;

                if(newpin5.length() == 4){
                    

                    cout << "Pin updated successfully\n";}
                    else{
                        cout<<"Error!!"<<endl;
                    }

                cout << "Enter your new pin to continue:  \n";
                cin >> pin_stored5;

                while (pin_stored5 != newpin5) {
                    cout << "Invalid pin\n";
                    cout << "Re-enter your pin again: "<<endl;
                    cin >> pin_stored5;
                }
                break;

            case 5:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "invalid\n";
        }
    }

    }
    else if (Acc_num == 202528025) {
        cout<<"WELCOME MR. TALAR"<<endl;
        string pin_stored6 = "9465";
        string pin6;
        cout << "Enter your pin: ";
        cin >> pin6;
        while (pin6 != pin_stored6) {
            cout<<"Access Denied!! Wrong pin"<<endl;
            cout << "Enter valid pin: ";
            cin >> pin6;
        }
        int choice6;
        int balance6 = 4050;
        string enteredPin6;
        string newpin6;
        int amount6;

        cout << "Access Granted !!!\n";
    cout << "======Welcome======\n"<<endl;

    while(choice6 != 5) {
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4.Change Pin\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice6;

        switch(choice6) {
            case 1:
                if (balance6 == 0) {
                    cout<<"Not available.."<<endl;
                }
                cout << "Your current balance is: Rs. " << balance6 << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount6;
                if(amount6 > 0) {
                    balance6 += amount6;
                    cout << " Successfully deposited Rs. " << amount6 << endl;
                } else {
                    cout << " Invalid amount.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount6;

                cout << "Enter you four digit pin :";
                cin >> enteredPin6;

                while (enteredPin6 != pin6) {
                        cout << "Invalid pin\n";
                    cout << "Re-enter your pin again: "<<endl;
                    cin >> enteredPin6;
                }

                if(amount6 > 0 and amount6 <= balance6) {
                    balance6 -= amount6;
                    cout << "Please collect your cash.\n";
                    cout << "Your current balance is: Rs. " << balance6 << endl;
                } else if(amount6 > balance6) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;

            case 4:
                cout << "Enter new pin";
                cin >> newpin6;
                pin_stored6 = newpin6;

                if(newpin6.length() == 4){
                    

                    cout << "Pin updated successfully\n";}
                    else{
                        cout<<"Error!!"<<endl;
                    }
                cout << "Enter your new pin to continue:  \n";
                cin >> pin_stored6;

                while (pin_stored6 != newpin6) {
                    cout << "Invalid pin\n";
                    cout << "Re-enter your pin again: "<<endl;
                    cin >> pin_stored6;
                }
                break;

            case 5:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "invalid\n";
        }
    }
    }
    else {
        cout << "Thank you\n";
    }
    return 0;
}