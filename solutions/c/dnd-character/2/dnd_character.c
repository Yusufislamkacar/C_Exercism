#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

int ability(void){
    srand(time(NULL));
    int randDiceTotal = rand() % 18 + 3;
    
    return randDiceTotal;
}

int modifier(int score){
    return score / 2 - 5;
}

dnd_character_t make_dnd_character(void){
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
