#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main ()
{
    int ar [1000], sum = 0, i;
    int hsum[10][2];
    for(i = 0; i < 10; i++)
        pipe(hsum[i]);
    for(i = 0; i < 1000; i++)
        ar[i] = i + 1;
    int cpid = fork();
    if(cpid == 0){
        for(int i=0;i<100;i++)
                sum = sum + ar[i];
            write(hsum[0][1], &sum , sizeof(sum));
            close(hsum[0][1]);
            exit(0);
    }
    else{
        int cpid1 = fork();
        if(cpid1 == 0){
            for(int i=100;i<200;i++)
                sum = sum + ar[i];
            write(hsum[1][1], &sum , sizeof(sum));
            close(hsum[1][1]);
            exit(0);
        }
        else{
            int cpid2 = fork();
            if(cpid2 == 0){
                for(int i=200;i<300;i++)
                    sum = sum + ar[i];
                write(hsum[2][1], &sum , sizeof(sum));
                close(hsum[2][1]);
                exit(0);
            }
            else{
                int cpid3 = fork();
                if(cpid3 == 0){
                    for(int i=300;i<400;i++)
                        sum = sum + ar[i];
                    write(hsum[3][1], &sum , sizeof(sum));
                    close(hsum[3][1]);
                    exit(0);
                    }
                else{
                    int cpid4 = fork();
                    if(cpid4 == 0){
                        for(int i=400;i<500;i++)
                            sum = sum + ar[i];
                        write(hsum[4][1], &sum , sizeof(sum));
                        close(hsum[4][1]);
                        exit(0);
                        }
                    else{
                        int cpid5 = fork();
                        if(cpid5 == 0){
                            for(int i=500;i<600;i++)
                                sum = sum + ar[i];
                            write(hsum[5][1], &sum , sizeof(sum));
                            close(hsum[5][1]);
                            exit(0);
                        }
                        else{
                            int cpid6 = fork();
                            if(cpid6 == 0){
                                for(int i=600;i<700;i++)
                                        sum = sum + ar[i];
                                write(hsum[6][1], &sum , sizeof(sum));
                                close(hsum[6][1]);
                                exit(0);   
                            }
                            else{
                                int cpid7 = fork();
                                if(cpid7 == 0){
                                    for(int i=700;i<800;i++)
                                        sum = sum + ar[i];
                                    write(hsum[7][1], &sum , sizeof(sum));
                                    close(hsum[7][1]);
                                    exit(0);
                                }
                                else{
                                    int cpid8 = fork();
                                    if(cpid8 == 0){
                                       for(int i=800;i<900;i++)
                                            sum = sum + ar[i];
                                        write(hsum[8][1], &sum , sizeof(sum));
                                        close(hsum[8][1]);
                                        exit(0);
                                    }
                                    else{
                                        int cpid9 = fork();
                                        if(cpid9 == 0){
                                            for(int i=900;i<1000;i++)
                                                sum = sum + ar[i];
                                            write(hsum[9][1], &sum , sizeof(sum));
                                            close(hsum[9][1]);
                                            exit(0);
                                        }
  }}}}}}}}}
    for(int i = 0; i < 10; i++) 
        wait(NULL);
    int hsum2 = 0, totalSum = 0;
    for(int i = 0; i < 10; i++){
            read(hsum[i][0], &hsum2, sizeof(int));
            close(hsum[i][0]);
            totalSum = totalSum + hsum2;
    }
    printf("TOTAL SUM IS: %d",totalSum);
  return 0;
}
