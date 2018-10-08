#include <stdio.h>
#include <math.h>

int main()

{
    float a,b; // the two numbers whose lcm will be calculated 
    float p2a=0, p2b=0, p2f=0; // this is the initial value of the power of prime number 2. prime number 2 is a factor on numbers which are non-prime. It is set to zero because it is not applicable for prime numbers. 
    float p3a=0, p3f=0, p3b=0; // this is the initial value of the power of prime number 3. prime number 3 is a factor on numbers which are non-prime. It is set to zero because it is not applicable for prime numbers.  
    float af=1, bf=1, ap2=1, ap3=1, bp2=1, bp3=1, lcm; // the final value of the numbers used in lcm 
    printf("Enter the first number:");
    scanf("%f", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    
    if(a==b){
        lcm=a;
    }
    else{
        
    
    if (a==1 || a==5 || a==7){
        af=a; // if the number entered is a prime number, it is immediately multiplied to get lcm
    }
     else{
        af=1; // if it is not a prime number, it is set into 1 so that whatever results into the following conditions, the value will not be affected; this cannot be initialized into zero as it will result to 0 lcm.
    }   
    if (a==3){
        p3a=1;
        p2a=0;
    }
    
    
    if(a==2){
        p2a=1;
        p3a=0;
    }


    
    if (b==1 || b== 5 || b==7){
        bf=b; // if the number entered is a prime number, it is immediately multiplied to get lcm
    }
    else{
        bf=1; // if it is not a prime number, it is set into 1 so that whatever results into the following conditions, the value will not be affected; this cannot be initialized into zero as it will result to 0 lcm.
    }    
    if (b==3){
        p3b=1;
        p2b=0;
    }
    
    if(b==2){
        p2b=1;
        p3b=0;
    }

    if(a==4){ // if the number is 4, its factor is 2 raised 2
        p2a=2; //hence, the p2a refers to the power of the factor 2. (2 raised 2)
        p3a=0; // if 3 is not a prime factor of the number entered, the default power is 0, which automatically produces 1 (example: 3 raised to 0 is 1)thereby not affecting the lcm equation
    }
    if(a==6){ // the number is 6, its factors is 3 times 2
        p2a=1; // hence, p2a refers to the power of factor 2 which is 1
        p3a=1;// hence, p2a refers to the power of factor 3 which is 1
      }
    if(a==8){ // the number is 6, its factors 2 cubed (2 raised to the power of 3)
        p2a=3; // hence, p2a refers to the power of factor 2 which is 3
        p3a=0; // if 3 is not a prime factor of the number entered, the default power is 0, which automatically produces 1 (example: 3 raised to 0 is 1)thereby not affecting the lcm equation
    }
    if(a==9){ // if the number is 9, its factor is 3 raised 2
        p2a=0;// if 2 is not a prime factor of the number entered, the default power is 0, which automatically produces 1 (example: 2 raised to 0 is 1) thereby not affecting the lcm equation
        p3a=2;//hence, the p2a refers to the power of the factor 2. (2 raised 2)
    }
    
        if(b==4){// if the number is 4, its factor is 2 raised 2
        p2b=2; //hence, the p2a refers to the power of the factor 2. (2 raised 2)
        p3b=0;// if 3 is not a prime factor of the number entered, the default power is 0, which automatically produces 1 (example: 3 raised to 0 is 1)thereby not affecting the lcm equation
    }
    if(b==6){ // the number is 6, its factors is 3 times 2
        p2b=1; // hence, p2a refers to the power of factor 2 which is 1
        p3b=1;// hence, p2a refers to the power of factor 3 which is 1
      }
    if(b==8){ // the number is 6, its factors 2 cubed (2 raised to the power of 3)
        p2b=3; // hence, p2a refers to the power of factor 2 which is 3
        p3b=0;//hence, the p2a refers to the power of the factor 2. (2 raised 2)
    }
    if(b==9){ // if the number is 9, its factor is 3 raised 2
        p2b=0; // if 2 is not a prime factor of the number entered, the default power is 0, which automatically produces 1 (example: 2 raised to 0 is 1) thereby not affecting the lcm equation
        p3b=2; //hence, the p2a refers to the power of the factor 2. (2 raised 2)
    }
    
    if (p2a>p2b){ // this condition determines that factors with the higher power will be retained, example (6,8) the factors are (3^1 and 2^1 for 6) and (2^3), the lcm should be (3^1 * 2^3) because only one factor should be retained and it should have the highest power
        p2f=p2a;
        ap2=(pow(2,p2f));
    }
    else{  
        ap2=1; //initializes to 1 if the number is a prime number
    }
    
    if (p2b>=p2a){ // this condition determines that factors with the higher power will be retained, example (6,8) the factors are (3^1 and 2^1 for 6) and (2^3), the lcm should be (3^1 * 2^3) because only one factor should be retained and it should have the highest power
        p2f=p2b;
        bp2=(pow(2,p2f));
    }
    else{
        bp2=1; //initializes to 1 if the number is a prime number
    }
    
        if (p3a>p3b){ // this condition determines that factors with the higher power will be retained, example (6,8) the factors are (3^1 and 2^1 for 6) and (2^3), the lcm should be (3^1 * 2^3) because only one factor should be retained and it should have the highest power
        p3f=p3a;
        ap3=(pow(3,p3f));
    }
    else{
        ap3=1; //initializes to 1 if the number is a prime number
    }
    if (p3b>=p3a){ // this condition determines that factors with the higher power will be retained, example (6,8) the factors are (3^1 and 2^1 for 6) and (2^3), the lcm should be (3^1 * 2^3) because only one factor should be retained and it should have the highest power
        p3f=p3b;
        bp3=(pow(3,p3f));
    }
    else{
        bp3=1; //initializes to 1 if the number is a prime number
    }

    lcm=ap2*ap3*bp2*bp3*af*bf; //equation for lcm
    }
    printf("\nthe lcm is %0.0f\n", lcm);
    printf("\nap2 is %0.0f", ap2); //all lines below are for checking the values of the variables
    printf("\nap3 is %0.0f", ap3);
    printf("\nbp2 is %0.0f", bp2);
    printf("\nbp3 is %0.0f", bp3);
    printf("\np2a is %0.0f", p2a);
    printf("\np3a is %0.0f", p3a);
    printf("\np2b is %0.0f", p2b);
    printf("\np3b is %0.0f", p3b);
    printf("\np2f is %0.0f", p2f);
    printf("\np3f is %0.0f", p3f);
    printf("\naf is %0.0f", af);
    printf("\nbf is %0.0f", bf);
        printf("\nthe lcm is %0.0f\n", lcm);
    return 0;
}
