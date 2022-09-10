#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	//this array is used for the 8 balls responses//
	
    const char *string_table[] = { // array of pointers to constant strings
        "It is certain."
        "It is decidedly so.",
        "Without a doubt.",
        "Yes definitely.",
        "You may rely on it.",
		"As I see it, yes.",
		"Most likely.",
		"Outlook good.",
		"Yes.",
		"Signs point to yes.",
		"Reply hazy, try again.",
		"Ask again later.",
		"Better not tell you now.",
		"Cannot predict now.",
		"Concentrate and ask again.",
		"Don't count on it.",
		"My reply is no.",
		"My sources say no.",
		"Outlook not so good.",
		"Very doubtful."
    };
	int table_size = 20; //This is used to tell the programn the table size//
	srand(time(NULL)); // randomize the start value
		
	//Bellow is what determins how many characters can be entered into the string that the user inputs so that it can be recalled later//
	char str[100];
	//This welcomes the user into the program//
	printf("Hello welcome to the magic 8 ball\n");
	printf("What is it you want to know?\n");
	
	//this function is for confirmation status//
	char confirm[3];
	confirm[0] = 'n';
	while (confirm[0] == 'n')
	{
		printf("Enter a string....\n");
		//This will be where the user inputs a response to the program//
		scanf("%s", str);
		//This piece of code calls on the location of where the string is stored and prints it to re-confirm what the user inputed//
		printf("you said: %s\n", str);
		//This is the confirmation code//
    	printf("Is this what you meant to input use y for yes and n for no\n");
		scanf("%s", confirm);
	}
		
	printf("Magic 8 ball says\n");

        const char *rand_string = string_table[rand() % table_size];
        printf("Magic 8 ball says. %s\n",  rand_string);
	return 0;
}