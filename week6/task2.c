#include<stdio.h>
#include "data.h"
typedef struct{
u32 hours;
u32 minutes;
u32 seconds;
}time;
void main(){
time start;
time end;
time differnt;
printf("enter start time \n:");
printf("hours: ");
scanf("%d",&start.hours);
printf("minutes: ");
scanf("%d",&start.minutes);
printf("seconds: ");
scanf("%d",&start.seconds);
printf("enter end time \n:");
printf("hours: ");
scanf("%d",&end.hours);
printf("minutes: ");
scanf("%d",&end.minutes);
printf("seconds: ");
scanf("%d",&end.seconds);
differnt.hours=end.hours*3600-start.hours*3600;
differnt.minutes=end.minutes*60-start.minutes*60;
differnt.seconds=end.seconds-start.seconds;
differnt.seconds=differnt.hours+differnt.minutes+differnt.seconds;
printf("differnt time %d hours %d minutes %d seconds",differnt.seconds/3600,(differnt.seconds%3600)/60,(differnt.seconds%3600)%60);
}