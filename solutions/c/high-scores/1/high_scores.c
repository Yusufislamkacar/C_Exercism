#include "high_scores.h"


int32_t latest(const int32_t *scores, size_t scores_len){
    int32_t latest_score = scores[scores_len -1];
    return latest_score;
}

int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t the_best = -1;
    for(size_t i = 0; i < scores_len; i++){
        if (scores[i] > the_best) the_best = (int32_t)scores[i];
    }
return the_best;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output){
   
    
    int32_t *ptr = (int32_t*)malloc(scores_len * sizeof(int32_t));
    memcpy(ptr, scores, scores_len * sizeof(int32_t));

    size_t limit = (scores_len < 3) ? scores_len : 3;
    size_t temp = 0;
    for (size_t i = 0; i < limit ; i++)
    {
        for (size_t m = i+1; m < scores_len; m++)
        {
            if(ptr[m] > ptr[i] ) {
                temp = ptr[m];
                ptr[m] = ptr[i];
                ptr[i] = temp;
            }
        }
        output[i] = ptr[i];
        
    } 
    free(ptr);
    return limit;      
                            
  }