#include <stdio.h>

int main(void){

    int count = 0;//number of signals entered
    int signal = 0;//current signal
    //last 5 signals values
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int num5=0;
    //k values
    double k5= 5.0;
    double k3 = 3.0;
    //get input unless EOF
    while(scanf("%d",&signal) != EOF){
        count++;//add 1 to count each iretation
        //update the values of last 5 signals
        num1=num2;
        num2=num3;
        num3=num4;
        num4=num5;
        num5=signal;

        if(signal%5 == 0){//check if the signal can be divided by 5
            if(count < 5){//if there is less than 5 signals before the current signal print the current signal
                printf("%d, ",signal);
            }else{//print the avg of k5
                printf("%f, ",(num1+num2+num3+num4+num5)/k5);
            }
        }else{
            if(count < 3){//if there is less than 3 signals before the current signal print the current signal
                printf("%d, ",signal);
            }else{
                printf("%f, ",(num3+num4+num5)/k3);//print the avg of k3
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
