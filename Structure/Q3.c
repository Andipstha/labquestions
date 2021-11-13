/*     Define a structure data type called time-struct containing 
       three members hour, minute and second. Develop a program 
       that would assign values to the individual members and 
       display the time in the form 16:40:51.
*/
#include<stdio.h>
struct time_struct{
int hour,minute,second;
}time;
int main()
{
int i;
printf("\nEnter the time in hour, minute and second format");
scanf("%d%d%d",&time.hour,&time.minute,&time.second);
if(time.minute>60 || time.second>60)
printf("\nPlease enter valid time format");
else
{
printf("\nEntered Time is :");
if(time.hour<=9 && time.minute<=9 && time.second<=9)
printf("\n0%d:0%d:0%d",time.hour,time.minute,time.second);
else if(time.hour<=9 && time.minute>9 && time.second>9)
printf("\n0%d:%d:%d",time.hour,time.minute,time.second);
else if(time.hour>9 && time.minute<=9 && time.second>9)
printf("\n%d:0%d:%d",time.hour,time.minute,time.second);
else if(time.hour>9 && time.minute>9 && time.second<=9)
printf("\n%d:%d:0%d",time.hour,time.minute,time.second);
else if(time.hour<=9 && time.minute<=9 && time.second>9)
printf("\n0%d:0%d:%d",time.hour,time.minute,time.second);
else if(time.hour<=9 && time.minute>9 && time.second<=9)
printf("\n0%d:%d:0%d",time.hour,time.minute,time.second);
else if(time.hour>9 && time.minute<=9 && time.second<=9)
printf("\n%d:0%d:0%d",time.hour,time.minute,time.second);
else
printf("\n%d:%d:%d",time.hour,time.minute,time.second);
}
return 0;
}
