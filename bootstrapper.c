#include "stdio.h"

int main(void) {
    printf("#include \"stdio.h\"\n");
    printf("#include <string.h>\n");
    printf("\n");
    printf("#define DATA_SIZE 1048576\n");
    printf("\n");
    printf("int main(void) {\n");
    printf("    char data[DATA_SIZE];\n");
    printf("    memset(data, 0, sizeof(data));\n");
    printf("    int pointer = 0;\n");
    printf("    \n");

    char alpha;
    scanf("%c", &alpha);
    while (alpha != '\n')
    {
        switch (alpha)
        {
            case '+': printf("    data[pointer]++;\n"); break;
            case '-': printf("    data[pointer]--;\n"); break;
            case '>': printf("    if (++pointer >= DATA_SIZE) pointer = 0;\n"); break;
            case '<': printf("    if (--pointer < 0) pointer = DATA_SIZE - 1;\n"); break;
            case '.': printf("    printf(\"%%c\", data[pointer]);\n"); break;
            case ',': printf("    scanf(\"%%c\", &data[pointer]);\n"); break;
            case '[': printf("    while (data[pointer]) {\n"); break;
            case ']': printf("    }\n"); break;
            default: break;
        }

        scanf("%c", &alpha);
        if (alpha == '\n') {
            scanf("%c", &alpha);
        }
    }
    
    printf("    return 0;\n");
    printf("}\n");
    printf("\n");
    
    return 0;
}
