#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float bank1[6] = {5.79,5.92,6.46,7.61,8.53,9.29};
    float bank2[8] = {5.49,5.72,6.36,7.66,8.73,9.99,10.14,11.04};
    int creditscore;
    int i;
    char name[10\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  ][50] = {""};
    int length = sizeof(name)/sizeof(char);
      printf("Enter your name:");
      gets(name);


      printf("Enter your credit score: ");
      scanf("%d",&creditscore);


       if(creditscore > 720 && creditscore < 850){
            if(bank1[0] < bank2[0]){
               printf("Your intrest rate is %.2f ",bank1[0]);
               printf(" you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[0]);
                 printf("you are from bank 2");
            }
       }

        else if(creditscore > 719 && creditscore < 750){
            if(bank1[1] < bank2[1]){
               printf("Your intrest rate is %.2f",bank1[1]);
               printf("you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[1]);
                 printf("you are from bank 2");
            }

        }
         else if(creditscore > 674 && creditscore < 720){
            if(bank1[2] < bank2[2]){
               printf("Your intrest rate is %f",bank1[2]);
               printf("you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[2]);
                 printf("you are from bank 2");
            }
         }
       else if(creditscore > 609 && creditscore < 675){
            if(bank1[3] < bank2[3]){
               printf("Your intrest rate is %.2f",bank1[3]);
               printf("you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[3]);
                 printf("you are from bank 2");
            }

       }

        else if(creditscore > 559 && creditscore < 610){
            if(bank1[4] < bank2[4]){
               printf("Your intrest rate is %.2f",bank1[4]);
               printf("you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[4]);
                 printf("you are from bank 2");
            }
        }
        else if(creditscore > 499 && creditscore < 560){
            if(bank1[5] < bank2[5]){
               printf("Your intrest rate is %.2f",bank1[5]);
               printf("you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[5]);
                 printf("you are from bank 2");
            }
        }
        else if(creditscore > 429 && creditscore < 500){
            if(bank1[6] < bank2[6]){
               printf("Your intrest rate is %.2f",bank1[6]);
               printf("you are from bank 1");
            }
            else{
                 printf("Your intrest rate is %.2f",bank2[6]);
                 printf("you are from bank 2");
            }
        }
        else if(creditscore > 349 && creditscore < 430 ){
            printf("your intrest rate is %.2f", bank2[7]);
            printf("you are from bank2");
        }
        else if(creditscore <= 349){
            printf("your card has been declined by bank2");

        }

         else{
        printf("Enter a number between 1 and 850");
    }


return 0;
}
