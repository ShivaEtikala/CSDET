#include <stdio.h>

void countToNumber(float increment){
	
	if(increment<=0 || increment != (int) increment){
		printf("Increment is %.2f \n", increment);
		printf("Invalid Increment, Please enter positive Integer \n");
		return;
	} 

	int intincrement = (int) increment;
	printf("Increment is %d \n", intincrement);   

	    for (int i = 1; i <= 5; i += intincrement) {
        printf("%d\n", i);
    }

}

int main() {
    printf("Program runs to increment values from 1-5\n");
	countToNumber(1);
	countToNumber(2);
    return 0;
}