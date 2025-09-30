#include <stdio.h>

typedef struct 
{
    int clientID ;
    char firstName [20];
    char lastName [20];
    char email [30];
    float sold ;
}clinte;

typedef struct 
{
    int productID [20];
    char pruductName [20];
    char categories [30];
    float price [5] ;
    int stock ;
    char discription [100];

}product;

clinte cli;
product produ;

int choice;
void Menu ()
{
    
    printf("=============== CUSTOMER PURCHASING SYSTEM ===============\n");
    printf("1- Customer profile management \n");
    printf("2- balance management\n");
    printf("3- View products\n");
    printf("4- Make a purchase\n");
    printf("5- My statistics\n");
    printf("0- Exit\n");
    printf("enter a choice : \n");
    scanf("%d",&choice);

    
}


void creatUser(){
    printf("first name: ");
    scanf("%s",cli.firstName);

    printf("last name: ");
    scanf("%s", cli.lastName);

    printf("e-mail: %s%s@client.com\n", cli.firstName, cli.lastName);
    printf("\n");
}

void balance(){
    float amount;
    printf("===== balance management =====\n");
    printf("diposit: ");
    scanf("%f", &amount);
    cli.sold = cli.sold + amount ;
}

int main(){

    creatUser();

    Menu();
    switch(choice)
{
    case 1: 
    creatUser();
    break;

    case 2: 
    balance();
    break;

        case 3: 
    printf("");
    break;

        case 4: 
    printf("");
    break;

        case 5: 
    printf("");
    break;
 
        case 0: 
    printf("");
    break;    

    default : printf("invalid input");


}





    return 0;
}