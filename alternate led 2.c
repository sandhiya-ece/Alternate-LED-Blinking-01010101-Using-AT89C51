#include<reg51.h>
unsigned int i;
void delay()
{
for(i=0;i<=10000;i++);
}
void main()
{
while(1)
{
P2=0X00;
delay();
P2=0XAA;
delay();
}}