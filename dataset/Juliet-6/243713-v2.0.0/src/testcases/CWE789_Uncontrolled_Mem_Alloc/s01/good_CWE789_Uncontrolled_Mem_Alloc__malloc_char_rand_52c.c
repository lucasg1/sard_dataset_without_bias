void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
void FUN2(size_t data);
void FUN3(size_t data)
{
    FUN2(data);
}
void FUN1(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    data = 20;
    FUN1(data);
}
void FUN3(size_t data);
void FUN7()
{
    size_t data;
    data = 0;
    data = rand();
    FUN3(data);
}
void FUN0(size_t data)
{
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
void FUN2(size_t data)
{
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
