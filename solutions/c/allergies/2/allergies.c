#include "allergies.h"

int is_allergic_to(allergen_t allergy, int allergy_score ){
    return allergy_score & (1 << allergy);
}

allergen_list_t get_allergens(int allergy_score){
    allergen_list_t patient = {0};

    for(int i = 0; i < ALLERGEN_COUNT; i++){
        if ((allergy_score >> i) & 1){ 
            patient.allergens[i] = true;
            patient.count++;
        }
    }
    return patient;
}
