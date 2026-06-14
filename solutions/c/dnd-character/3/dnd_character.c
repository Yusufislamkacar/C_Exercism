#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

int ability(void){
    int randDiceTotal = rand() % 16 + 3;
    
    return randDiceTotal;
}

int modifier(int score){
    return floor((float)(score -10)/2);
}

dnd_character_t make_dnd_character(void){
    srand(time(NULL));
    dnd_character_t newCharacter;
    newCharacter.strength = ability();
    newCharacter.dexterity = ability();
    newCharacter.constitution = ability();
    newCharacter.intelligence = ability();
    newCharacter.wisdom = ability();
    newCharacter.charisma = ability();
    newCharacter.hitpoints = modifier(newCharacter.constitution) + 10;
    return newCharacter;
}
