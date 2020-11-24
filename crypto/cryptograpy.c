#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	scanf("%d",&number);
	int varFour=(number%10)+7;
	number=number/10;
	int varThree=(number%10)+7;
	number=number/10;
	int varTwo=(number%10)+7;
	number=number/10;
	int varOne=(number%10)+7;
	number=number/10;
	printf("%d\n",varOne);
	// remnder
	int remenderOne=varOne%10;
	int remenderTwo=varTwo%10;
	int remenderThree=varThree%10;
	int remenderFour=varFour%10;	
	
	printf("%d%d%d%d\n",remenderOne,remenderTwo,remenderThree,remenderFour);
	int temp=remenderOne;
	remenderOne=remenderThree;
	remenderThree=temp;
	temp=remenderTwo;
	remenderTwo=remenderFour;
	remenderFour=temp;
printf("Encryption: %d%d%d%d\n",remenderOne,remenderTwo,remenderThree,remenderFour);

	// Decryption
	temp=remenderOne;
	remenderOne=remenderThree;
	remenderThree=temp;
	temp=remenderTwo;
	remenderTwo=remenderFour;
	remenderFour=temp;
	printf("for decryption: %d%d%d%d\n",remenderOne,remenderTwo,remenderThree,remenderFour);
int i=4;

		if(i==4){
			if(remenderFour - 7 >= 0){
				
			}
			else{
				remenderFour +=10;
			}
		}
		else if(i==3){
			if(remenderThree - 7 >= 0){
				
			}
			else{
				remenderThree +=10;	
			}
		}
		else if(i==2){
			if(remenderTwo - 7 >= 0){
				
			}
			else{
				remenderTwo +=10;
			}
		}
		else{
			if(remenderOne - 7 >= 0){
				
			}
			else{
				remenderOne +=10;
			}
	}
	remenderOne -= 7;
	remenderTwo -=7;
	remenderThree -=7;
	remenderFour -= 7;
	printf("after Decryption: %d%d%d%d\n",remenderOne,remenderTwo,remenderThree,remenderFour);
	return 0;
}
