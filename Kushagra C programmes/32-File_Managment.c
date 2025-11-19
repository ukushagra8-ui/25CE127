#include <stdio.h>
#include <string.h>

#define MAX_WORD 200   
int main() {
    FILE *fp = fopen("Demo.txt", "r");
    
    
    if (fp == NULL) {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }

    int ch;
    char word[MAX_WORD];
    int index = 0;

    
    while ((ch = getc(fp)) != EOF) {

        
        if (ch != ' ' && ch != '\n' && ch != '\t') {
            
            if (index < MAX_WORD - 1) {
                word[index++] = ch;
            }
        }
        else {
           
            word[index] = '\0';

            
            for (int i = index - 1; i >= 0; i--) {
                putc(word[i], stdout);
            }

           
            putc(ch, stdout);

            index = 0;  
        }
    }

   
    if (index > 0) {
        word[index] = '\0';
        for (int i = index - 1; i >= 0; i--) {
            putc(word[i], stdout);
        }
    }

 
    fclose(fp);

    return 0;
}
