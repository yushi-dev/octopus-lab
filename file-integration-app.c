/*
* This is the first application that I managed to program using C!
* The application is called "File Integration Application".
* By passing two files in the current directory as arguments,
* the application displays their contents as a single output.
*
* You may think it's very simple or may not see a practical use case.
* Please go easy on me!
*/

#include <stdio.h>

int main(int unsigned argc, char* argv[]) {

    if (argc==3) {
        FILE* fp1=fopen(argv[1], "r");
        FILE* fp2=fopen(argv[2], "r");
                
        if (fp1 !=NULL && fp2 !=NULL) {

            char s[1000];
            int i=1;

            printf("%-2d %s\n",i++, argv[1]);
            for (i; fgets(s, sizeof(s), fp1); i++) printf("%-2d %s",i,s);
            puts("");
            printf("%-2d\n",i++);

            printf("%-2d %s\n",i++, argv[2]);
            for (1; fgets(s, sizeof(s), fp2); i++) printf("%-2d %s",i,s);
            puts("");
            printf("%-2d\n",i++);

            fclose(fp1);
            fclose(fp2);
        }

        else {
            puts("File names are wrong.");
        }
    }
        
    else puts("Aurgments are only two. Please retry it.");
}