#ifndef TYPES_H
#define TYPES_H

class Types{
    public:
        int pInversed(char * string);
        int charToInt(char c);
        char intToChar(int a);
        int getResult(char * string);
};
class Cal{
    public :
    void createFile(char * string);
    char * readFile();
    void executeFile();
    void showResult();
    void Clean();
};

#endif // TYPES_H
