#include  <stdio.h>

void append(int array[],int size,int element);
void printsq(int number1, int number2) {

    

    for (int i=0;i*i<number2;i++){
        if (i*i>= number1)
        {
            
        printf("%d ",i*i);
    }
}
}
int main(){
  /*  int myArray[10];

    myArray[10] = 5;
    for(int i = 0; i < 10; i++){
        printf("%d\n",myArray[i]);
}
*/
/*
int multiArray[3][4];
for(int i = 0; i<3;i++ ){
    printf("\n%d",multiArray[i][0]);
}
*/
/*
int matrix[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9},
};
for(int i = 0;i<3;i++){
    for(int j=0;j<3;j++){
        if (j == 2) {
                printf("%d", matrix[i][j]);
            } else {
                printf("%d, ", matrix[i][j]);
            }
    }
    printf("\n");
}

int example[10] = {};
for(int i = 0; i<10;i++){
printf("%d",example[i]);

}
*/

    int number1, number2;
    printf("Bir sayi giriniz:");
    scanf("%d",&number1);
    printf("Bir sayi daha giriniz:");
    scanf("%d",&number2);

    printsq(number1,number2);







    return 0;
    }