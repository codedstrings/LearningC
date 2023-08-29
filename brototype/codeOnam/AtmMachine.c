#include<stdio.h>
void depositfn(int);
void withdraw(int);
int accBalance=0, minstmnt[],i=0;
int main(){
    int repeat=1;
    int choice, deposit, withdraw; 
    do
    {
        printf("Enter choice:\n1. Deposit\n2. Withdraw\n3. Balance Enquiry\n4. Mini statement\n\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%d",&deposit);            
            depositfn(deposit);
            break;
        case 2: 
            // withdraw();
        default:
            break;
        }
        printf("\nDo you wish to continue(1=yes,0=No)?:   ");
        scanf("%d",&repeat);
    } while (repeat==1);
    
}

void depositfn(int deposit){
    accBalance+=deposit;
    minstmnt[i]=deposit;
    i++;
    printf("\ndeposited amount %d \n Account Balance: %d\n",deposit,accBalance);
   
}
// void withdraw(){

// }