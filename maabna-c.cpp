#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int a,b;
void ali(void){
	int i=-1,j,adad2[100];
	char adad1[100],c;
	long int num1=0,num2=0;
	printf("Enter the number: ");
	scanf("%c",&c);
	do{
		i++;
		scanf("%c",&adad1[i]);
	} while(adad1[i]!='\n');
   
	j=i-1;
	for(i=j;i>=0;i--){ //converts the base to 10.
		if(adad1[i]<='9'&& adad1[i]>='0'){
			num1+=((long int)pow((float)a,(j-i)))*(((int)adad1[i])-48);  //bara tabdile kode ascii be adad
		}
		else if(adad1[i]<='Z'&&adad1[i]>='A'){
			num1+=((long int)pow((float)a,(j-i)))*(((int)adad1[i])-55);
		}
		else if(adad1[i]<='z'&&adad1[i]>='a'){
			num1+=((long int)pow((float)a,(j-i)))*(((int)adad1[i])-87);
		}
	}
	i=0;
	while(num1>=b){ //converts the base to b. (START)
		adad2[i]=num1%b;
		i++;
		num1/=b;			
	}
	adad2[i]=num1; //converts the base to b. (END)
	printf("\nResult: ");
	for(;i>=0;i--){ //prints the result.
		if(adad2[i]<=9&&adad2[i]>=0){
			printf("%d",adad2[i]);
		}
		else if(adad2[i]>=10&&adad2[i]<=35){
			printf("%c",(char)(adad2[i]+55));
		}
	} 
}
int main (void)
{
printf("     ======================================= ");
printf("\n     > > > Programmer   :   Ali Karimi < < <");
printf("\n     ======================================= ");
printf("\n\nEnter current base: ");
scanf("%d",&a);
printf("Enter desired base: ");
scanf("%d",&b);
ali();
getche();
return 0;
}
