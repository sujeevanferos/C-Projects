#include <stdio.h>

int main()
{

    // typedef - reserved keyword that gives an axisting datatype a " nikname"

    typedef struct
    {
        char name[25];
        char passwd[25];
        int id;
    } User;

    User user1 = {"sujee", "pass345", 2656};
    User user2 = {"feric", "pass657584", 446542};

    printf("%s\n", user1.name);
    printf("%s, %d\n", user2.name, user2.id);


    return 0;
}