#include <stdio.h>

int main() {
    char caseChoice;

    printf("Enter a number (1, 2, 3, 4, 5, 6): ");
    scanf("%c", &caseChoice);

    switch(caseChoice)
    {
        case '1': {
            printf("In this space write a loop to print any word of your choosing 20 times");

            // Initiate variable a for loop control
            int a;

            for(a = 0; a <= 20; a++){
                printf("\nFinally this code has worked!\n");
            }

        }
            break;

        case '2': {
            printf("In this space write a loop that continues to ask for a number until the user types in 23\n");
            printf("The code has an example of taking an integer from the user\n");

            int n;
            printf("Enter a value: ");
            scanf("%d", &n);

            while(n != 23){
                printf("\nEnter a value: ");
                scanf("%d", &n);
            }

            printf("You picked %d",n);
        }
            break;

        case '3': {
            printf("Create an if statement that asks the user for their name and if they want ice cream.\n");
            printf("Print their name and different text to the screen depending on if they answer yes or no.\n");
            printf("Due to the intricacies of string you are allowed to ask the user to type 1 for yes and 2 for no.");
            printf("The code has an example of taking a string from the user\n");

            char str1[20];
            int user_choice;
            printf("What is your first name? ");
            scanf("%s", &str1);
            printf("%s, would you like ice cream? (1 for yes/2 for no)\n", &str1);
            scanf("%i", &user_choice);

            if(user_choice == 1){
                printf("Good, %s.\n", str1);
            }
            if(user_choice == 2){
                printf("Wise decision, %s. There's nothing healthy about it anyways...\n", str1);
            }

        }
            break;

        case '4': {
            printf("Run this code to determine what scenarios it doesn’t work under\n");
            printf("Then fix the code by switching the ints to floats\n");
            float a;
            float b;
            float c;
            printf("First number\n");
            scanf("%f", &a);
            printf("Second number\n");
            scanf("%f", &b);
            c = a / b;
            printf("%f", c);
            return 0;
        }

        case '5':
        {
            // This isn't a question but it is a survey.
            // This is also only for Jash
            // For any of the CSC courses you've already taken
            // Please change the corresponding 0's to 1's
            int disp[2][7] = {
                    {105, 110, 120, 130, 230, 240, 250},
                    {  0,   0,   0,   0,   0,   0,   0}
            };
            int i, j;
            printf("Your previous courses:\n");
            i=0;
            for(j=0;j<7;j++) {
                printf("%d ", disp[i][j]);
            }
            printf("\n");
            i=1;
            for(j=0;j<7;j++) {
                printf("  %d ", disp[i][j]);
            }
            printf("\n");
        }

            return 0;



        case '6':
            //Alter the text in the following as you deem appropriate.
            //Even if you already gave me a preference that was before my speech on Dropbox during class 2.
            printf("After research I am okay with using dropbox. ");
            printf("My email address for Dropbox is silver.steven67@gmail.com");
            break;
        default:
            printf("Error! Invalid choice");
    }

    return 0;
}