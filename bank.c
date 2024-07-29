#include<stdio.h>
int main(){
    double total=0,deposit,withdraw;
    int pin,_attempts,totaltries = 0,_processes,_counts = 1;
    do{
        printf("Welcome To Nepal Investment Bank Limited!");
        printf("\nEnter 4 digit pin code to access your account : ");
        scanf("%d",&pin);
        if(pin==1000){
            do{
                printf("\n----WELLCOME----");
                printf("\n\n----MAIN MENU----");
                printf("\n1. Deposit Money\n2. Withdraw Money");
                printf("\n\nEnter 1 to deposit money or 2 to withdraw money and any other to exit the menu : ");
                scanf("%d",&_processes);
                switch(_processes){
                    case 1:
                        printf("\n--Deposit Money--");
                        printf("\nEnter an amount to Deposit : ");
                        scanf("%lf",&deposit);
                        total += deposit;
                        printf("\nYou have Successfully Deposited %lf Rupees And your current balance is %lf Rupees.",deposit,total);
                        printf("\n\nEnter 1 to use again and any other number to exit : ");
                        scanf("%d",&_counts);
                        break;
                    case 2:
                        printf("\n--Withdraw Money--");
                        printf("\nEnter an amount to Withdraw : ");
                        scanf("%lf",&withdraw);
                        if(total<withdraw){
                            printf("\nInsufficent Balance. Your current balance is %lf Rupees.",total);
                            printf("\n\nEnter 1 to check again or any other number to exit : ");
                            scanf("%d",&_counts);
                        }
                        else{
                            total -= withdraw;
                            printf("\nYou have Withdrawn %lfRupees And your current balance is %lfRupees.",withdraw,total);
                            printf("\n\nEnter 1 to use again or any other number to exit : ");
                            scanf("%d",&_counts);
                        }
                        break;
                    default:
                        printf("\nThank You For Using Our Service. ");
                        _counts=0;
                }
            }while(_counts==1);
            break;
        }
        else{
            printf("\nThe Pin you have entered is incorrect. You only have a few attempts");
            printf("\n\nEnter 1 to try again or 3 to exit : ");
            scanf("%d",&_attempts);
            }
    totaltries += _attempts;
    }while(totaltries<=2);
    if(totaltries>=2){
        printf("\nYou have Attempted to Enter The Wrong Ping Too Many Times. Please Try Again. ");
    }
    printf("\n\nThank You for using Nepal Investment Bank Limited as your choice. Please Come again.");
return 0;
}
