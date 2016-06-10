#include <stdio.h>

int main() 
{
    int time;
    
    printf("Enter the time: ");
    scanf("%d", &time);
    	
	if ((time >= 5)&&(time <= 10)){
		printf("\ngood morning.");
 } else {
	    if ((time >= 12)&&(time <= 18)) {
		    printf("\ngood affternoon.");
 } else {
	        if ((time >= 19)&&(time <= 24)){
		        printf("\ngood evening.");
 } else {
	            if ((time >= 0)&&(time < 5)) {
		            printf("\ngood night.");
 } else {
		            printf ("Error!");
			   }
		      }
		}
	}
	return 0;
}
