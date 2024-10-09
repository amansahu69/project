#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int main(){

    int hour,minute, secound;
    hour=minute=secound=0;
    while (1)
    {    //clear output screen
        printf("\n");
        //print time in hh: mm: ss formet

        printf("%02d: %02d : %02d", hour ,minute,secound);
        //clear output beffer in gcc
        fflush(stdout);
        //increase secound
        secound++;

        if(secound ==60){

            minute+=1;
            secound=0;
        }

        if(minute==60){


            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            secound=0;
        }
        sleep(1);
        

    }
    
    
    
    

    
    return 0;
}