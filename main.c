#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char* ideas[] = {
        "Drawing a floating city in space",
        "A combination of a musical instrument and an animal",
        "A painting representing a strange dream",
        "Design an alien with human features",
        "Drawing a certain feeling such as anger or joy in a visual way",
    };

    int num_ideas = sizeof(ideas) / sizeof(ideas[0]);

    srand(time(NULL));
    int index = rand() % num_ideas;

    printf("Hello! Here is an unconventional drawing idea.:\n%s\n", ideas[index]);

    return 0;
}
