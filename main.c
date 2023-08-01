#include<stdio.h>>
int main()
{
    int ch,qun,ret,net=0;
    choice:
    printf("\n enter 1 for coffee rup-15");
    printf("\n enter 2 for tea rup-12");
    printf("\n enter 3 for milk rup-10");
    printf("\n enter 4 for cold coffee rup-20");

    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {

    case 1:
        printf("\nCoffee selected");
        printf("\nEnter the quanity :");
         scanf("%d",&qun);
         net+=(qun*15);

        break;

    case 2:
        printf("\nTea selected");
         printf("\nEnter the quanity :");
          scanf("%d",&qun);
            net+=(qun*12);

         break;

    case 3:
        printf("\nMilk selected");
         printf("\nEnter the quanity :");
         scanf("%d",&qun);
           net+=(qun*10);

         break;

    case 4:
        printf("\nCold coffee selected");
         printf("\nEnter the quanity :");
          scanf("%d",&qun);
            net+=(qun*20);

         break;


    default:

         printf("\nInvalid data");

    }
         printf("\nEnter 1 for continue :");
         scanf("%d",&ret);
         if(ret==1)
         {

             goto choice;
         }
             printf("\nTotal amount is :%d",net);
         printf("\nThank you come again");


    return 0;
}
