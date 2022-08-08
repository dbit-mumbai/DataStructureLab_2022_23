#include <stdio.h>
struct time
{
    int hour;
    int minutes;
    int seconds;
};
int main (void)
{
    struct time timeUpdate (struct time now);
    struct time curTime, nextTime;
    printf ("Enter the time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &curTime.hour,
           &curTime.minutes, &curTime.seconds);
    nextTime = timeUpdate (curTime);
    printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour,
            nextTime.minutes, nextTime.seconds );
    return 0;
}
// Function to update the time by one second
struct time timeUpdate (struct time now)
{

    if ( now.seconds == 60 ) 
    {                             // next minute

        now.seconds = 0;
        ++now.minutes;
    }
    else if(now.minutes == 60) 
    {                             // next hour
        now.minutes = 0;
        ++now.hour;
    }
    if ( now.hour == 24 ) 
    {                             // next day
        now.hour = 0;

    }
    return now;
}