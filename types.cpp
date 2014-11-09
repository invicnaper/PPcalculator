#include "types.h"
#include "tree.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int Types::pInversed(char * string){
    /* parse the polonaise inversed and draw result */
    int i, k, result, c1, c2;
        char tmp[2];
        //tmp[0] = '1';
        //tmp[1] = '2';
    Pile pi;
    for(i=0;i<strlen(string);i++){
        /* we search for operand and operator */
        if(string[i] >= '0' && string[i]<= '9')
                        pi.addToPile(&pi.methode_inv, string[i]);
        if(string[i] == '*' || string[i] == '/' || string[i] == '-' || string[i] == '+'){
            k = 1;
            while((pi.methode_inv != NULL) && (k >= 0)){
                tmp[k] = this->intToChar(pi.delFromPile(&pi.methode_inv));
                printf("c = %c\n",tmp[k]);
                k--;
            }
            c1 = this->charToInt(tmp[0]);
            c2 = this->charToInt(tmp[1]);
            switch(string[i]){
                case '+':
                    result = c1 + c2;
                    printf("Result %d + %d = %d \n",c1,c2,result);
                    return result;
                    break;
                case '*':
                    result = c1 * c2;
                    printf("Result %d * %d = %d \n",c1,c2,result);
                    return result;
                    break;
                case '/':
                    result = c1 / c2;
                    printf("Result %d / %d = %d \n",c1,c2,result);
                    return result;
                    break;
                case '-':
                    result = c1 - c2;
                    printf("Result %d - %d = %d \n",c1,c2,result);
                    return result;
                    break;
            }
            pi.addToPile(&pi.methode_inv, this->intToChar(result));
        }
    }
    return 0;
}
int Types::getResult(char * string){
    /*  parse string */
    int i, k;
        Pile pi;
    for(i = 0;i<strlen(string);i++){
        if(string[i] >= '0' && string[i] <= '9'){
            printf("number found ! \n"); /* for debug */
                        pi.addToPile(&pi.methode_inv, string[i]);
        }
        if(string[i] == '*' || string[i] == '-' || string[i] == '+' || string[i] == '/'){
            printf("operator found ! \n"); /* for debug */
            k = 1;

        }

    }
    return 0;
}
int Types::charToInt(char c){
    int a;
    if(c=='0')
        return a==0;
    else
    {
        a=c-48;
        return a;
    }
}
char Types::intToChar(int a){
    char c;
    a+=48;
    c=(char)a;    // converti l'ascii int_to_char en caractere
    return c;
}
void Cal::createFile(char * string){
    FILE * f = NULL;
    f = fopen("__tmp.c","w");
    if(!f){
        printf("Error creating tmp file");
    }else{
        fprintf(f,"#include <stdio.h>\n");
        fprintf(f,"#include <iostream>\n");
        fprintf(f,"#include <math.h>\n");
        fprintf(f,"using namespace std;\n");
        fprintf(f,"int main(){\n");
        fprintf(f,"int result;\n");
        fprintf(f,"result = %s;\n",string);
        fprintf(f,"cout << %s << endl;\n",string);
        fprintf(f,"return 0;\n");
        fprintf(f,"}");
    }
    fclose(f);
    return ;
}
void Cal::executeFile(){
    system("g++ __tmp.c -lm");
    system("./a.out >> __res.txt");
    return ;
}
char * Cal::readFile(){
    FILE * f = NULL;
    char * res;
    f=fopen("__res.txt","r");
    if(!f){
        printf("Error reading tmp file");
    }else{
        fscanf(f,"%s",res);
    }
    fclose(f);

    return res;
}
void Cal::Clean(){
#ifdef __linux__
    system("rm __tmp.c && rm __res.txt & rm a.out");
#endif
}

