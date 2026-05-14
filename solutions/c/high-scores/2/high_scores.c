#include "high_scores.h"

int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t the_best = -1;
    for(size_t i = 0; i < scores_len; i++){
        if (scores[i] > the_best) the_best = scores[i];
    }
return the_best;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output){

    int32_t first_best =-1;
    int32_t second_best =-1;
    int32_t third_best =-1;

    for (size_t i = 0; i < scores_len ; i++)
    {
          if (scores[i] > first_best)
          {
            third_best  = second_best;
            second_best = first_best;
            first_best = scores[i];
          }
          else if(scores[i] > second_best)
          {
            third_best = second_best;
            second_best = scores[i];
          }
          else if(scores[i] > third_best)
          {
            third_best = scores[i];
          }
           
    }  
    
    size_t count = (scores_len < 3) ? scores_len : 3;

    if (count >= 1) output[0] = first_best;
    if (count >= 2) output[1] = second_best;
    if (count >= 3) output[2] = third_best;
    
    return count;
  }