size_t VAR0;
size_t VAR1;
size_t VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    size_t data;
    data = 0;
    data = 20;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    size_t data;
    data = 0;
    data = rand();
    VAR2 = data;
    FUN1();
}
extern size_t VAR0;
extern size_t VAR1;
extern size_t VAR2;
void FUN0()
{
    size_t data = VAR1;
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = (char *)malloc(data*sizeof(char));
            if (myString == NULL) {exit(-1);}
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN1()
{
    size_t data = VAR2;
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = (char *)malloc(data*sizeof(char));
            if (myString == NULL) {exit(-1);}
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
