
#include <stdio.h>

int min,sec = 0;

int concatTime(int a, int b) 
{ 
    char string1[4];
    char string2[4]; 
    sprintf(string1, "%02d", a); 
    sprintf(string2, "%02d", b); 
    strcat(string1, string2); 
    int countTime = atoi(string1); 
    return countTime; 
} 

int timeReturn(){
    if(sec!=0){
	    sec-=1;
    }
	if(sec==0&&min!=0){
    	sec=59;
    	min-=1;
	}
	if(sec==0&&min==0){
	    return 0;
	}
	return concatTime(min,sec);
	
}

int main()
{
    min=1;
    while(1){
	    sleep(1);
        int timee = timeReturn();
        printf("Tmer: %d\n",timee);
    }

    return 0;
}
