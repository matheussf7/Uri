#include <stdio.h>
#include <string.h>

//1049
int main(){
    char first[20], second[20], third[20];
    scanf("%s", first);
    scanf("%s", second);
    scanf("%s", third);


    // Case 1
    if(strcmp(first, "vertebrado") == 0){
            // First exception
            if(strcmp(second, "ave") == 0){
                    if(strcmp(third, "carnivoro") == 0){
                        printf("aguia\n");
                    }
                    else if(strcmp(third, "onivoro") == 0){
                        printf("pomba\n");
                    }
            }
            // Second exception
            else if(strcmp(second, "mamifero") == 0){
                    if(strcmp(third, "onivoro") == 0){
                        printf("homem\n");
                    }
                    else if(strcmp(third, "herbivoro") == 0){
                        printf("vaca\n");
                    }
            }
    }
    // Case 2
    else if(strcmp(first, "invertebrado") == 0){
            // First exception
            if(strcmp(second, "inseto") == 0){
                    if(strcmp(third, "hematofago") == 0){
                        printf("pulga\n");
                    }
                    else if(strcmp(third, "herbivoro") == 0){
                        printf("lagarta\n");
                    }
            }
            // Second exception
            else if(strcmp(second, "anelideo") == 0){
                    if(strcmp(third, "hematofago") == 0){
                        printf("sanguessuga\n");
                    }
                    else if(strcmp(third, "onivoro") == 0){
                        printf("minhoca\n");
                    }
            }
    }
    return 0;
}
