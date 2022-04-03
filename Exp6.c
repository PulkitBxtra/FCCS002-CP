#include<stdio.h>
#include<stdlib.h>
int main(){
    char *string = malloc(50*sizeof(char));
    printf("Enter String : ");
    gets(string);
    int count = 0;
    for (int i=0 ;;i++){
        if (*(string + i)!= '\0'){
            count++;
        }
        else{
            break;
        }
    }
    printf(" The Number of Characters in the string are %d",count);
    return 0;
}
