#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main ()
{
    int ar [1000];
    int sum = 0;
    int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0;
    int i = 0;
    for(i = 0; i < 1000; i++)
        ar[i] = i + 1;
    int cpid = fork();
    if(cpid == 0){
         printf("Total sum of 1000 numbers is: %d\n",sum);
    }
    else{
        int cpid1 = fork();
        if(cpid1 == 0){
            for(int i = 0; i < 100; i++)
                s1 = s1 + ar[i];
                printf("Total sum of 100 numbers is: %d\n",s1);
                sum = sum + s1;
            }
      else{
        int cpid2 = fork();
        if(cpid2 == 0){
            for(int i = 100; i < 200; i++)
                s2 = s2 + ar[i];
                    printf("Total sum of 100 numbers is: %d\n",s2);
                    sum = sum + s2;
        }
        else{
            int cpid3 = fork();
            if(cpid3 == 0){
                for(int i = 200; i < 300; i++)
                    s3 = s3 + ar[i];
                    printf("Total sum of 100 numbers is: %d\n",s3);
                    sum = sum + s3;
            }
            else{
                int cpid4 = fork();
                if(cpid4 == 0){
                    for(int i = 300; i < 400; i++)
                        s4 = s4 + ar[i];
                        printf("Total sum of 100 numbers is: %d\n",s4);
                        sum = sum + s4;
                }
                else{
                    int cpid5 = fork();
                    if(cpid5 == 0){
                        for(int i = 400; i < 500; i++)
                            s5 = s5 + ar[i];
                            printf("Total sum of 100 numbers is: %d\n",s5);
                            sum = sum + s5;
                    }
                    else{
                        int cpid6 = fork();
                        if(cpid6 == 0){
                            for(int i = 500; i < 600; i++)
                                s6 = s6 + ar[i];
                                printf("Total sum of 100 numbers is: %d\n",s6);
                                sum = sum + s6;
                        }
                        else{
                            int cpid7 = fork();
                            if(cpid7 == 0){
                                for(int i = 600; i < 700; i++)
                                    s7 = s7 + ar[i];
                                    printf("Total sum of 100 numbers is: %d\n",s7);
                                    sum = sum + s7;
                            }
                            else{
                                int cpid8 = fork();
                                if(cpid8 == 0){
                                    for(int i = 700; i < 800; i++)
                                        s8 = s8 + ar[i];
                                        printf("Total sum of 100 numbers is: %d\n",s8);
                                        sum = sum + s8;
                                }
                                else{
                                    int cpid9 = fork();
                                    if(cpid9 == 0){
                                        for(int i = 800; i < 900; i++)
                                            s9 = s9 + ar[i];
                                            printf("Total sum of 100 numbers is: %d\n",s9);
                                            sum = sum + s9;
                                    }
                                    else{
                                        int cpid10 = fork();
                                        if(cpid10 == 0){
                                            for(int i = 900; i < 1000; i++)
                                                s10 = s10 + ar[i];
                                                printf("Total sum of 100 numbers is: %d\n",s10);
                                                sum = sum + s10;
                                        }
    }}}}}}}}}}
  return 0;
}
