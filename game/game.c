#include <stdio.h> // Препроцессор

int main ()
{
    int gold = 10;
    int hp_monster = 3;
    char attack;
    printf("\tYou attacked by monster! Monster HP : %d\n", hp_monster);
    attack = getchar();
    if (attack == 'a')
    {
        hp_monster = hp_monster - 1; // 2
        printf("\tYou attacked a monster! Monster HP : %d\n", hp_monster);
    }
    printf("You pressed: %c\n", attack);
    hp_monster = hp_monster - 1; // 1
    printf("\tYou attacked a monster! Monster HP : %d\n", hp_monster);
    hp_monster = hp_monster - 1; // 0
    printf("\tYou attacked a monster! Monster HP : %d\n", hp_monster);
    if (hp_monster < 1)
    {
        printf("\tYou killed monster.\n");
        printf("\tYou get %d gold.", gold);
        return 0;
    }
    else
    {
        printf("Monster run away!");
    }
}