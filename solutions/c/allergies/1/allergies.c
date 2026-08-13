#include "allergies.h"

int is_allergic_to(allergen_t allergy, int allergy_score ){
    int buffer = 1;
    for(unsigned i = 0; i < allergy; i++){
        buffer = buffer << 1;
    }
    if(allergy_score & buffer) return 1;
    return 0;
}

allergen_list_t get_allergens(int allergy_score){
    allergen_list_t patient;
    
    patient.count = 0;
    int buffer = 1;
    for(int i = 0; i < 8; i++){
        if(allergy_score & buffer){ 
            patient.allergens[i] = true;
            patient.count++;
        }
        buffer = buffer << 1;
    }
    return patient;
}
