#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {
    if (argc != 2 ) {
        printf("not enough args");
        return 0;
    }
    FILE *fp = fopen(argv[1], "w");

    fprintf(fp,"#include <stdio.h>\n#include <stdbool.h>\n\nbool isnumber(int num) { \n");
    for (int i = 0; i < 1000000; i++) {
        fprintf(fp,"    if (i == %d) {return true;}\n",i);
    }
    fprintf(fp,"    else{return false;}\n}");
    fclose(fp);
    return 0;
}
