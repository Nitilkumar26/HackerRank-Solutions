#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    // 1. Character input
    scanf("%c", &ch);
    
    // 2. String (Word) input
    scanf("%s", s);
    
    // 3. Sentence input (line clear karke sentence read karein)
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    // Outputs print karein
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}