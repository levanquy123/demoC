#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Team
{
    int a;
    char b;
};

void Input();
void Output();
void MainMenu();

int main(int argc, char const *argv[])
{
    MainMenu();


    return 10000;
}

void MainMenu()
{
    Input();
    Output();
}


int sum(int a, int b){

    return a + b;
}
int n = 0;
void Input()
{
    FILE *p;

    struct Team *team;

    team = (struct Team *)malloc(n * sizeof(struct Team));
    while (1)
    {
        char select;
        printf("Nhap a: ");
        fflush(stdin);
        scanf("%d", &team[n].a);

        printf("Nhap b: ");
        fflush(stdin);
        scanf("%c", &team[n].b);

        n++;

        printf("ban co muon nhap them? (Y/N): ");
        fflush(stdin);

        scanf("%c", &select);

        if (select == 'n' || select == 'N')
        {
            p = fopen("Data.dat", "wb");
            fwrite(team, sizeof(struct Team), n, p);
            fclose(p);
            break;
        }
    }
}

void Output()
{
    FILE *file;
    struct Team *teams;
    file = fopen("Data.dat", "rb");

    teams = (struct Team*)malloc(n * sizeof(struct Team));
    fread(teams, sizeof(struct Team), n, file);

    for (int i = 0; i < n; i++)
    {
        printf("So vua nhap la: %d\n", teams[i].a);
        printf("So vua nhap la: %c\n", teams[i].b);
    }
    fclose(file);
}