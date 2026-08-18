#include "clock.h"


clock_t clock_create(int hour, int minute){
    clock_t time;
    hour += minute / 60;
    minute %= 60;
    if(minute < 0){
        minute += 60;
        hour--;
    }
    
    hour %= 24;

     if (hour < 0)
    {
        hour +=24;
    }

    time.text[0] = hour / 10 + '0';
    time.text[1] = hour % 10 + '0';
    time.text[2] = ':';
    time.text[3] = minute / 10 + '0';
    time.text[4] = minute % 10 + '0';
    time.text[5] = '\0';
    return time;

}
clock_t clock_add(clock_t clock, int minute_add) {
    unsigned int old_hour = (clock.text[0] - '0') * 10 + clock.text[1] - '0';
    unsigned int old_minute = (clock.text[3] - '0') * 10 + clock.text[4] - '0';

    return clock_create(old_hour, old_minute + minute_add);
}
clock_t clock_subtract(clock_t clock, int minute_subtract) {
    int old_minute = (clock.text[3] - '0') * 10 + clock.text[4] - '0';
    unsigned int old_hour = (clock.text[0] - '0') * 10 + clock.text[1] - '0';
    
    while(old_minute < minute_subtract){
        old_minute += 60;
        if(old_hour > 0 ){
            old_hour--;
        }else old_hour = 23;
    }
    old_minute -= minute_subtract;

    return clock_create(old_hour, old_minute);
}
bool clock_is_equal(clock_t a, clock_t b){
    int old_minute = (a.text[3] - '0') * 10 + a.text[4] - '0';
    int old_hour = (a.text[0] - '0') * 10 + a.text[1] - '0';
    return old_minute == ((b.text[3] - '0') * 10 + b.text[4] - '0') && old_hour == (b.text[0] - '0') * 10 + b.text[1] - '0';

}