#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100

struct coach
{
    char name[30];
    int age;
    int experience;
};

struct team
{
    char name[30];
    char sport_type[30];
    struct coach coach_info;
};

void print_details(struct team t);
int is_duplicate(struct team teams[], int count, char name[]);

int main()
{
    struct team teams[MAX_TEAMS];
    int team_count = 0;
    char choice;

    do
    {
        char temp_name[30];
        printf("Enter team name: ");
        scanf(" %[^\n]", temp_name);

        if (is_duplicate(teams, team_count, temp_name))
        {
            printf("Team with this name already exists. Try again.\n");
            continue;
        }

        strcpy(teams[team_count].name, temp_name);

        printf("Enter sport type: ");
        scanf(" %[^\n]", teams[team_count].sport_type);

        printf("Enter coach name: ");
        scanf(" %[^\n]", teams[team_count].coach_info.name);

        printf("Enter coach age: ");
        scanf("%d", &teams[team_count].coach_info.age);

        printf("Enter coach experience (years): ");
        scanf("%d", &teams[team_count].coach_info.experience);

        team_count++;

        printf("Do you want to add another team? (y/n): ");
        scanf(" %c", &choice);

    } while ((choice == 'y' || choice == 'Y') && team_count < MAX_TEAMS);

    printf("\nAll Teams:\n");
    for (int i = 0; i < team_count; i++)
    {
        print_details(teams[i]);
        printf("\n");
    }

    printf("Name: Kushagra Upadhyay\nBranch:CSPIT CE\nStudent ID: 25CE127\n");
    return 0;
}

void print_details(struct team t)
{
    printf("--- Team Information ---\n");
    printf("Team Name: %s\n", t.name);
    printf("Sport: %s\n", t.sport_type);
    printf("\n--- Coach Information ---\n");
    printf("Coach Name: %s\n", t.coach_info.name);
    printf("Coach Age: %d\n", t.coach_info.age);
    printf("Coach Experience: %d years\n", t.coach_info.experience);
}

int is_duplicate(struct team teams[], int count, char name[])
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(teams[i].name, name) == 0)
            return 1;
    }
    return 0;
}
