#include <stdlib.h>
#include <stdio.h>

#include "first.h"

struct MyStructure {
    int first;
    int second;
};

union MyUnion {
    int first;
    int second;
};

int main(int argc, char* argv[])
{
    accessibleFromAnywhere();

    /* if you try to compile, you're gonna get linking error:
       undefined reference to accessibleFromCompilationUnit */
    // accessibleFromCompilationUnit();

    struct MyStructure myStructure;
    printf("Structure size: %d\n", sizeof(myStructure));

    myStructure.first = 10;
    myStructure.second = 20;

    printf(
        "Structure first attribute: %d\n",
        myStructure.first
    );
    printf(
        "Structure second attribute: %d\n",
        myStructure.second
    );

    union MyUnion myUnion; 
    printf("Union size: %d\n", sizeof(myUnion));

    myUnion.first = 10;
    myUnion.second = 20;

    printf(
        "Union first attribute: %d\n",
        myUnion.first
    );
    printf(
        "Union second attribute: %d\n",
        myUnion.second
    );

    return 0;
}
