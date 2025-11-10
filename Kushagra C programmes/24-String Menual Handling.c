#include <stdio.h>

int str_length(char string[]);
void str_reverse(char string[]);
void str_compare(char string[]);
void str_copy(char string[]);
void str_merge(char string[]);
void str_upper(char string[]);
void str_lower(char string[]);
void str_cap(char string[]);
int i;

int main()
{
    char input_str[100];
    int choice;
    printf("Please enter input string to perform operations on!\n");
    fgets(input_str,100,stdin);
    // Remove newline character from string if present
    int len1 = str_length(input_str);
    if (len1 > 0 && input_str[len1 - 1] == '\n') {
        input_str[len1 - 1] = '\0';
    }
    printf("Please enter what option you want to select\n1.Length of String\n2.Reverse String\n3.Compare Two Strings\n4.Copy String\n5.Merge Notes\n6.String to Upper Case\n7.String to Lower Case\n8.Capitalize each word\n");
    scanf("%d", &choice);
    while (getchar() != '\n'); // Clear input buffer after reading choice


    switch(choice)
    {
    case 1:
    {
        printf("String Length: %d\n", str_length(input_str));
        break;
    }

    case 2:
    {
        str_reverse(input_str);
        break;
    }

    case 3:
    {
        str_compare(input_str);
        break;
    }

    case 4:
    {
        str_copy(input_str);
        break;
    }

    case 5:
    {
        str_merge(input_str);
        break;
    }

    case 6:
    {
        str_upper(input_str);
        break;
    }

    case 7:
    {
        str_lower(input_str);
        break;
    }

    case 8:
    {
        str_cap(input_str);
        break;
    }

    default:
    {
        printf("Please enter proper option!\n");
    }
}
    printf("Name:Kushagra Upadhyay\nBranch:CSPIT CE\nStudent ID: 25CE127\n");
        return 0;
}

int str_length(char string[])
{
    int length = 0;
    while (string[length] != '\0')
    {
        length++;
    }
    return length;
}

void str_reverse(char string[])
{
    i=0;
    int length;
    length=str_length(string);
    char reverse[length];
    for (i = 0; i < length; i++)
    {
        reverse[i] = string[length - 1 - i];
    }
    reverse[length]='\0';
    printf("Reverse String: %s",reverse);
}

void str_compare(char string[])
{
    char second_str[100];
    int is_equal = 1;
    printf("Please enter second string to compare:\n");
    fgets(second_str, 100, stdin);

    // Remove newline character from second_str if present
    int len2 = str_length(second_str);
    if (len2 > 0 && second_str[len2 - 1] == '\n') {
        second_str[len2 - 1] = '\0';
    }

    int len1 = str_length(string);

    if (len1 != len2) {
        printf("Strings are different in length.\n");
        return;
    }

    if (is_equal)
    {
        printf("Both Strings are equal.\n");
    }
}

void str_copy(char string[])
{
    char copy[100];
    for (i = 0; string[i] != '\0'; i++)
    {
        copy[i] = string[i];
    }
    copy[i] = '\0'; // Null-terminate the copied string
    printf("Copied String: %s\n", copy);
}

void str_merge(char string[])
{
    char second_str[100];
    printf("Please enter second string to merge:\n");
    fgets(second_str, 100, stdin);

    // Remove newline character from second_str if present
    int len2 = str_length(second_str);
    if (len2 > 0 && second_str[len2 - 1] == '\n') {
        second_str[len2 - 1] = '\0';
    }

    char merged[200];
    for (i = 0; string[i] != '\0'; i++)
    {
        merged[i] = string[i];
    }
    for (int j = 0; second_str[j] != '\0'; j++, i++)
    {
        merged[i] = second_str[j];
    }
    merged[i] = '\0'; // Null-terminate the merged string
    printf("Merged String: %s\n", merged);
}

void str_upper(char string[])
{
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - ('a' - 'A');
        }
    }
    printf("Upper Case String: %s\n", string);
}

void str_lower(char string[])
{
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + ('a' - 'A');
        }
    }
    printf("Lower Case String: %s\n", string);
}

void str_cap(char string[])
{
    for(i = 0; string[i] != '\0'; i++)
    {
        if(i == 0 && string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - ('a' - 'A');
        }
        if(string[i] == ' ')
        {
            if(string[i+1] >= 'a' && string[i+1] <= 'z')
            {
                string[i+1] = string[i+1] - ('a' - 'A');
            }
        }
    }
    printf("Capitalized String: %s\n", string);
}
