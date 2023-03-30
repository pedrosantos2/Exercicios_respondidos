#include <stdio.h>
#include <string.h>

void inverteString(char *str) {
    int tamanho = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    inverteString(str);

    printf("A string invertida é: %s\n", str);

    return 0;
}
