#include "stdio.h"
#include "string.h"
#include "conio.h"
#include "windows.h"

struct team {
    char name[15], city[15], teamlead[15], rate[15];
} a[100];

struct search {
    char notValue[15], d[15];
} search[2];

int i = 0,
    mount = 0;

void addTeam() {
        i = mount;

        printf("Enter name of team: ");
        scanf("%s", &a[i].name);

        printf("Enter city: ");
        scanf("%s", &a[i].city);

        printf("Enter teamlead: ");
        scanf("%s", &a[i].teamlead);

        printf("Enter rating value: ");
        scanf("%s", &a[i].rate);

        {
            system("cls");
            printf("\n Done! \n");
            mount++;
        }
}

void showTeams(){
    for (int i = 0; i <= mount - 1; i++) {
        if (a[i].name != search[0].notValue)
            printf("%s  ", a[i].name);
            printf("%s  ", a[i].city);
            printf("%s  ", a[i].teamlead);
            printf("%s  \n", a[i].rate);
        }
}

void searchTeamByCity() {
        printf("Enter team's city for searching: ");
        scanf("%s", &search[0].d);

        for (i = 0; i <= mount-1; i++){
          if (!strcmp(a[i].city, search[0].d)){
                printf("%s  ", a[i].name);
                printf("%s  \n", a[i].city);
                printf("%s  ", a[i].teamlead);
                printf("%s  \n", a[i].rate);
           }
        }
}

void edit() {
        printf("Enter team's name for editing': \n");
        scanf("%s",&search[0].d);

        for (i = 0; i <= mount - 1; i++){
          if (!strcmp(a[i].name, search[0].d)){
                printf("Enter the new team's name: ");
                scanf("%s", a[i].name);

                printf("Enter the new team's city: ");
                scanf("%s", a[i].city);

                printf("Enter the new team's teamlead: ");
                scanf("%s", a[i].teamlead);

                printf("Enter the new team's rate: ");
                scanf("%s", a[i].rate);

                printf("Success!\n");
                break;
            }
        }
}
void removeTeam() {
        printf("Enter the team name for removing from teams's list: ");
        scanf("%s", &search[0].d);

    for (i = 0; i <= mount - 1; i++) {
        if (!strcmp(a[i].name, search[0].d)){
            a[i].name == search[0].notValue;
        }

        {
            system("cls");
            printf(" \n Removed success! \n");
        }
    }
}

int main(){
    int action = 1;

    while(action) {
        printf("\n MENU: \n 1 - Create new team' 2 - Show all teams' 3 - Edit' 4 - Remove' 5 - Search team by City, 0 - Exit\n");
        printf("\n Select action: ");
        scanf("%d", &action);

        switch (action) {
                case 0: printf("Goodbay!\n"); break;
                case 1: addTeam(); break;
                case 2: showTeams(); break;
                case 3: edit(); break;
                case 4: removeTeam(); break;
                case 5: searchTeamByCity(); break;
            default:
                printf("There is not such team\n");
        }
    }

    getch();
    return 0;
}
