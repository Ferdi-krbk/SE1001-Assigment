#include <stdio.h>
int factorial(int number);
int factorialWhile(int number);
int factorialRecursive(int number);
int fibonacciFor(int number);

int main(){
    int factorial_5 = factorial(5);
    printf("Factorial %d\n",factorial_5);
    int factorial_4 = factorialWhile(5);
    printf("Factorial %d\n",factorial_4);
    int factorial_3 = factorialRecursive(5);
    printf("Factorial %d\n",factorial_3);
    int fibonacci_1 = fibonacciFor(7);
    printf("Fibonacci %d\n",fibonacci_1);
    int fibonacci_2 = fibonacciRecursive(7);
    printf("Fibonacci %d \n",fibonacci_2);



    return 0;
}

    int factorial(int number){
   if(number < 0){
        return 0;
    }

    if(number==0){
        return 1;
    }
    int result= 1;
    for (int i = 1; i<= number; i++){
        result = result * i;
    
    }
    return result;
    }
    int factorialWhile(int number){
    if(number < 0){
        return 0;
    }

    if(number==0){
        return 1;
    }
    int result= 1;
    int i = 1;
    
    while(i < number){
    i++;
    result = result * i;
    }


    return result;
    }
    int factorialRecursive(int number){
        //Basecase
    if (number == 1 || number == 0){
            return 1;
        }
        return number * factorialRecursive(number - 1);
        
    }
    int fibonacciFor(int number){
        int first = 1 , second = 1 , result = 0;
        if (number == 1 || number == 2){
            return 1;
        }
        for(int i = 2; i < number;i++){
            result = first + second;
            first = second;
            second = result;
        
        }
        return result;
    }
    int fibonacciRecursive(int number){
        if(number ==1 || number ==2){
            return 1;

        }
        return fibonacciRecursive(number-1) + fibonacciRecursive(number -2);
    
    
    }
    
    
