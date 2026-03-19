#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

int ability(void) {
  int sum = 0;
  int smallest = 7;
  for (int i = 0; i < 4; i++) {
    int face = 1 + rand() % 6;
    sum += face;
    if (face < smallest)
      smallest = face;
  }
  sum -= smallest;
  return sum;
}

int modifier(int score){
    return score / 2 - 5;
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
