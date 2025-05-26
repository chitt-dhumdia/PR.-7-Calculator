#include<stdio.h>

int cal(int choice,int num1,int num2)
{   
    int sum,sub,mul,div,mod;

                switch (choice)
                {
                case 1:
                    sum = num1+num2;
                    printf("\n addition of %d and %d is : %d",num1,num2,sum);
                    break;
                case 2:
                    sub = num1-num2;
                    printf("\n substarction of %d and %d is : %d",num1,num2,sub);
                    break;
                case 3:
                    mul = num1*num2;
                    printf("\n multiplication of %d and %d is : %d",num1,num2,mul);
                    break;
                case 4:
                    div = num1/num2;
                    printf("\n division of %d and %d is : %d",num1,num2,div);
                    break;
                case 5:
                    mod = num1%num2;
                    printf("\n modulo of %d and %d is : %d",num1,num2,mod);
                    break;
                }

    
     
    
}

int main()
{
    
    int choice,num1,num2;
    do
    {   
            printf("\n");
            printf("press 1 for + \n");
            printf("press 2 for - \n");
            printf("press 3 for * \n");
            printf("press 4 for / \n");
            printf("press 5 for %% \n");
            printf("press 0 for exit.. \n");

    printf("\n enter your choice : ");
    scanf("%d", &choice); 
    
    if(choice==0)
    {
        printf("exit");
        break;

    } 

    printf("\n enter first number : ");
            scanf("%d", &num1);
    printf("\n enter second number : ");
            scanf("%d", &num2);
    cal(choice,num1,num2);

    }while(choice!=0);
    

   return 0; 

}