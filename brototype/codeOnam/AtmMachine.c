#include<stdio.h>
void depositfn(int);
void withdrawfn(int);
void ministmntfn();
int accBalance=0, minstmnt[],count=0;
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
            printf("Enter amount to withdraw: ");
            scanf("%d",&withdraw);   
            withdrawfn(withdraw);
            break;
        case 3:
            ministmntfn();
            break;
        default:
            break;
        }
        printf("\nDo you wish to continue(1=yes,0=No)?:   ");
        scanf("%d",&repeat);
    } while (repeat==1);
    
}

void depositfn(int deposit){
    accBalance+=deposit;
    minstmnt[count]=deposit;
    count++;
    printf("\ndeposited amount: %d \n Account Balance: %d\n",deposit,accBalance);
   
}
void withdrawfn(int withdraw){
    if (accBalance!=0)
    {
        accBalance-=withdraw;
        printf("\namount withdrawn: %d \n Account Balance: %d\n",withdraw,accBalance);
        minstmnt[count]=(withdraw*(-1));
        count++;
    }
    else
    {
        printf("Error. Insufficient Balance!\n");
    }
}

void ministmntfn(){
    printf("ministatement: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. %d\n",i,minstmnt[i]);
    }
    printf("\tCurrent balance: %d\n",accBalance);
    
}