
//This is a single line comment in C.

/*
This is a multi-line comment in C.
*/

#include <stdio.h>

int main(){
/*  
printf("Comments are fun! \n");   //This line prints out a string.
    

char lecture[] = "Introduction to Programming I";
printf("%s \n" , lecture);
char lecturer[] = "Ali";
printf("%s \n" , lecturer);
int number_of_students = 40;
printf("%d \n" , number_of_students);
float average_age = 19.5;
printf("%f \n" , average_age);
float average_quiz_notes = 0.2;
printf("%f \n" , average_quiz_notes);
int can_they_pass = 0;
if (can_they_pass == 0){
    printf("False \n");
}
else{
    printf("True \n");
}
char can_they_passs[] = "Gecebilirler!";
printf("%s \n" , can_they_passs);


int number1 , number2;
printf("Please Give Me a Number \n");
scanf("%d" , &number1);
printf("Please Give Me a Number \n");
scanf("%d" , &number2);

int total = number1 + number2;
printf("Total is: %d\n",total);


int a = 10;
int b = 2;


int mul = a * b;
printf("Mul: %d \n", mul);

float a = 10.0;
float b = 2.0;

float float_div = a / b;
printf("Float Div:%f\n", float_div);


int a = 10.0;
int b = 2.0;

int int_div = a / b;
printf("Int Div:%d\n", int_div);



for(int j = 0 ; j<101; j+=2 ) {
printf("%d\n", j);
}


for(int i = 0 ; i<101; i++){
    if (i % 2 != 0){
        printf("%d \n", i);
        continue;
    }
}


for(int i = 0 ; i<101; i++){
    if (i % 2 == 0){
        printf("%d\n" , i);
        continue;
    }
}

  

int number = 0;
while(number<=100){
    printf("%d \n" , number);
    number+=2;
}

int number =0;
while(1){
    if (number % 2 == 0){
        printf("%d \n", number);
    }
    i++;
    if (number == 101){
        break;
    }
}


int number = 0;
printf("Number: %d \n" , number);
while (number <=100){
    if (number % 2 != 0){
        printf("%d\n", number);
    }
    number++;
    
}


for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int z = 1; z <= 3; z++) {
                printf("(%d, %d, %d) ", i, j, z);
            }
        }
        printf("\n");
    }


for (int i = 1; i < 6; i++){
    for (int j = 1; j < 6; j++){
        printf("%d x %d = %d\t", i ,j,i*j);
    }
    printf("\n");
}



int how_much_money;
printf("How much money in your bank account? :");
scanf("%d",&how_much_money);
int real_estate;
printf("How much houses do you have in Kötekli? :");
scanf("%d",&real_estate);

int threshold_money = 100000;
int threshold_house = 5;

if (how_much_money > threshold_money && real_estate>= threshold_house){
    
        printf("You don't have to all day work");
    }
else if (how_much_money > 50000 && real_estate >= 1){
    printf("You have to work one day a week");
}
else {
    printf("You are so poor, you have to work for live.");
}
*/

int hp;
printf("What is the hp of the car that you wanted? :");
scanf("%d" ,&hp);

if (hp < 60){
    printf("We don't have any car below 60 horse power.");
}
else if (60 < hp && hp <= 75){
    printf("The cost of the car is 200.000 Turkish Liras.");
}
else if (75 < hp && hp <= 90){
    printf("The cost of the car is 350.000 Turkish Liras.");
}
else if (90 < hp && hp <= 110){
    printf("The cost of the car is 500.000 Turkish Liras.");
}
else if (110 < hp && hp <= 150){
    printf("The cost of the car is 700.000 Turkish Liras.");
}
else if (150 < hp && hp <= 200){
    printf("The cost of the car is 1.200.000 Turkish Liras.");
}
else{
    printf("The cars that have this horse power costs 2.000.000 Turkish Liras");
}
return 0 ;
}
