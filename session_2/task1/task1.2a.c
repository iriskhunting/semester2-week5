//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
    
    char password[50];
    char correct_pass[50] = "secure123";
    int compare;

    do {
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here

        fgets(password, 50, stdin);
        password[strcspn(password, "\n")] = '\0';
        compare = strcmp(password, correct_pass);
        if (compare != 0) {
            printf("incorrect, try again\n");
        }


    } while (compare != 0);
	 
    printf("Passoword correct!");
    return 0;
}