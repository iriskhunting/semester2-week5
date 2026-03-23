/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Iris Hunting
 * ID: 202028819
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal: ");
	scanf("%s", hex);

	// if input contains invalid hex digit
	for (int i = 0; hex[i] != '\0'; ++i) {
		
		char c = hex[i];
		int value;

		if (c >= '0' && c <= '9') {
			value = c - '0';
		}
		else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f') {
			value = c - 'a' + 10;
		} 
		else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		
		decimal = (decimal * 16) + value;
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}