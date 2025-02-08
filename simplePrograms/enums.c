// short term for enumarators;

#include <stdio.h>

enum Days{sun, mon, tue, wed, thurs, fri, sat};

int main()
{
    enum Days today = wed;

    if(today == sun || today == sat)
    {
        printf("It is a holiday");
    }

    else{
        printf("Today i wanna work ! :(\n");
    }


    return 0;
}