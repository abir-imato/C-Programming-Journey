#include <stdio.h>
int main()
{
char character;

    printf("Enter character : ");
    scanf("%c",& character);

    
    if(character >='A' && character <='Z'){
        printf("%c is a capital letter",character);
    }
else if(character>='a' && character<='z'){
        printf("%c is a cursive letter",character);
    }


else{
        printf("Any other character");

}

    return 0;
}