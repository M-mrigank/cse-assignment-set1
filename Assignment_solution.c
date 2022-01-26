//1) Write a C program which takes temperature in Celsius and convert that into Fahrenheit.

#include<stdio.h>

int main(){
   float celsius, fahrenheit;

   printf("Enter temperature in degree celsius: ");
   scanf("%f", &celsius);

   fahrenheit=(celsius*9/5)+32;

   printf("Temperature in farenheit is %.3f\n", fahrenheit);
}


//2) Write a C program to accept the number in decimal and print the number in binary, octal and hexadecimal.

#include<stdio.h>
#include<math.h>

int main(){
    int n, n1, n2, n3, temp, num1=0, num2=0, a=0, b=0, rem, i=1;
    printf("Enter number n: ");
    scanf("%d", &n);
    n1=n;
    while(n1>0){
        temp=n1%2;
        temp*=pow(10,a);
        num1+=temp;
        a++;
        n1=n1/2;
        temp=0;
    }
    printf("\nThe binary form of the given number is %d", num1);

    n2=n;
    while(n2>0){
        temp=n2%8;
        temp*=pow(10,b);
        num2+=temp;
        b++;
        n2=n2/8;
        temp=0;
    }
    printf("\nThe octal form of the given number is %d", num2);

    char hex[50];
    n3=n;
    while(n3!=0){
        rem=n3%16;
        if(rem<10){
            rem+=48;
        }
        else{
            rem+=55;
        }
        hex[i++]=rem;
        n3=n3/16;
    }

    printf("\nThe hexadecimal form of the given number is ");
    
    for(int j=i-1; j>=0; j--){
        printf("%c",hex[j]);
    }
    return 0;
}

//3) Write a C program to exchange the values of two variables without using third variable.

#include<stdio.h>

int main(){
    long long int num, sum=0, pro=1;

    printf("Enter value of num: ");
    scanf("%d", &num);

    while(num>0){
        int temp=num%10;
        sum+=temp;
        pro*=temp;
        num=num/10;
    }

    printf("The sum and product of digits of given number is %d and %d", sum, pro);
    return 0;
}


//4) Write a C program to enter a number (integer), find the sum and product of its digits.(e.g., INPUT: number=1234; OUTPUT: sum of digits=10 and product of digits= 24)

#include<stdio.h>

int main(){
    long long int num, sum=0, pro=1;

    printf("Enter value of num: ");
    scanf("%d", &num);

    while(num>0){
        int temp=num%10;
        sum+=temp;
        pro*=temp;
        num=num/10;
    }

    printf("The sum and product of digits of given number is %d and %d", sum, pro);
    return 0;
}


//5) Write a C Program to enter a number (integer), reverse it and check it whether it is a palindrome number or not.

#include<stdio.h>

int main(){
    int n, temp, new=0;
    printf("Enter the number n: ");
    scanf("%d",&n);

    while(n>0){
        temp=n%10;
        new+=temp;
        new*=10;
        n=n/10;
        temp=0;
    }

    new=new/10;

    printf("The number obtained after reversing the give number is %d\n", new);

    if(n=new){
        printf("This number is a palindrome.");
    }
    else{
        printf("This number is not a palindrome");
    }
}


//6) Write a C program to find the palindrome numbers between 1 to 100.

#include<stdio.h>

int main(){
    int n=100;

    printf("The palindrome numbers between 1 to 100 are: \n");

    for(int i=1; i<=n; i++){
        if(i%11==0){         //Since for two digit number to be palindrome it must be divisible by 11. 
            printf("%d ", i);
        }
        if(i<10){            
            printf("%d ", i);
        }        
    }
    return 0;
}


//7) Write C programs to print the following pyramids (input value of n).

//a)

#include<stdio.h>

int main(){
     int N;
     printf("Enter the value of N: ");
     scanf("%d", &N);

     for(int i=1; i<N+1; i++){
        for(int j=1; j<N+1; j++){
            if(j<=i){
                printf("%d ", j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
     }
}

//b)

#include<stdio.h>

int main(){
    int N, num=1;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(int i=1; i<N+1; i++){
        for(int j=1; j<N+1; j++){
            int a=num;
            if(j<=(N-i)){
                printf(" ");
            }
            else{
                printf("%d", a);
                num+=1;                
            }
            printf(" ");            
        }
        printf("\n");
        num=1;
    }

}

//c) 

#include<stdio.h>

int main(){
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    
    for (int i=1; i<=N; i++){
        int j;
        for (j=1; j<=(N-i); j++){
            printf("  ");
        }
        int k=i;
        for (; j<=N; j++){
            printf("%d ",k--);
        }
        k=2;
        for (; j<=(N+i-1); j++){
            printf("%d ",k++);
        }
        printf("\n");        
    }
    
    return 0;
}

//8)Input a number and a digit and find whether the digit is present in the number or not, if present then count the number of times it occurs in the number.

#include<stdio.h>

int main(){
    int number, digit, count=0, temp;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("\nEnter the digit to search within number: ");
    scanf("%d", &digit);

    while(number>0){
        temp=number%10;
        if(temp==digit){
            count+=1;
        }
        number=number/10;
    }
    if(count>0){
        printf("\nIn the given number %d occurs %d times\n", digit, count);
    }
    else{
        printf("\nIn the given number %d is not present.\n", digit);
    }
    
    return 0;
}


//9)Write a C program to find the sum of the series up to n (give as input) terms. Series= 1+2+4+7+11+16+22+........................... (up to n terms)

#include<stdio.h>

int main(){

    int n, a1=1, a2=0, ans=0;
    printf("\nEnter value of n: ");scanf("%d", &n);

    while(n>0){
        a1=a1+a2;
        ans+=a1;
        a2++;
        n--;
    }

    printf("\nThe sum is %d\n", ans);

    return 0;
}


//10)Write a C program to accept any four digited number and print that number in words.

#include<stdio.h>
#include<string.h>

int main(){
    char n[50];
    printf("Enter number n: ");
    scanf("%s", &n);

    int len=strlen(n);
    int index;

    char *one_digit[]={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *two_digit1[]={"","ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *two_digit2[]={"","","twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *three_digit[]={"","one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred", "eight hundred","nine hundred"};
    char *four_digit[]={"","one thousand","two thousand","three thousand","four thousand","five thousand","six thousand", "seven thousand","eight thousand","nine thousand"};

    if(len==4 && n[1]=='0' && n[2]=='0' && n[3]=='0'){
        index=(n[3]-48)+(n[2]-48)+(n[2]-48)+(n[1]-48)+(n[0]-48);
        printf("%s",four_digit[index]);
    }

    else if(len==4 && n[1]=='0' && n[2]=='0' && n[3]!=0){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[3]-48;
        printf("%s", one_digit[index]);
    }

    else if(len==4 && n[1]=='0' && n[2]!='0' && n[2]!='1' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[2]-48;
        printf("%s ",two_digit2[index]);
        index=n[3]-48;
        printf("%s",one_digit[index]);
    }

    else if(len==4 && n[1]=='0' && n[2]=='1'){
        index=n[0]-48;
        printf("%s ",four_digit[index]);
        index=(n[2]-48)+(n[3]-48);
        printf("%s",two_digit1[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]=='0' && n[3]=='0'){
        index=n[0]-48;
        printf("%s ",four_digit[index]);
        index=(n[1]-48)+(n[2]-48)+(n[3]-48);
        printf("%s", three_digit[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]=='0' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=n[3]-48;
        printf("%s", one_digit[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]!='0' && n[2]!='1' && n[3]=='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=(n[2]-48)+(n[3]-48);
        printf("%s",two_digit2[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]!='0' && n[2]!='1' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=(n[2]-48);
        printf("%s ",two_digit2[index]);
        index=(n[3]-48);
        printf("%s",one_digit[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]=='1' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=(n[2]-48)+(n[3]-48);
        printf("%s ",two_digit1[index]);
    }

    return 0;
}