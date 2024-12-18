#include <stdio.h>

/*
int main() {
*/   
   /* 
    int number1 = 10;
    int number2 = 2;
    */
    
    //int number1 = 10, number2 = 2;
  /*
    int number1 = 10, number2 = 3;
    int sum = number1 + number2;
    int modulo = number1 % number2;
    
    printf("Summation : %d,  and  Modulo : %d \n", sum,modulo);
    printf("Address int :  %d \n" , &sum ); 
    printf("Address hex :  %x \n" , &sum );
 */
 /*  
   int number1 , number2;
   printf("Please give me number1 : ");
   scanf("%d",&number1);
   printf("Please give me number2 : ");
   scanf("%d",&number2);
   
   int sum = number1 + number2;
   int mod = number1 % number2;

   printf("Summation : %d, and Modulo : %d \n", sum, mod);
   
   
   return 0;
} 
*/

/*

#include <stdio.h>
int main(){
int a = 5;
printf("a: %d \n" , a);
int b = a++;
printf("b: %d \n" , b);
int c = ++a;
printf("c: %d \n" , c); //+ öndeyse önce arttırıp sonra atıyor, değişken öndeyse önce atıyor sonra arttırıyor.

return 0;
}

*/

/*
int main(){
for(int myVar = 0 ; myVar <=10 ; myVar++){
    printf("MyVar is : %d\n", myVar);
    printf("MyVar is : %d\n", myVar);
    }
    return 0;
}

*/
/*
#include <stdio.h>

int main() {
    int age;
    printf("Please give me the age:");
    scanf("%d",&age);

    if (age >= 18){
        printf("You are an adult.\n");
        }
    else if ( age <16,){
        printf("You cannot get a motorcycle licence. \n");
        }
    else {
        printf("You are a minor.\n");
    }
    return 0;
}
*/

#include <stdio.h>

int main() {
    int myVar = 0;
    while (myVar < 10) {
        if(myVar % 2 == 1){
        printf("MyVar : %d\n", myVar);
        }else{
            break;
        }
        myVar++;
    }
    printf("MyVar : %d\n", myVar);

    return 0 ;
}