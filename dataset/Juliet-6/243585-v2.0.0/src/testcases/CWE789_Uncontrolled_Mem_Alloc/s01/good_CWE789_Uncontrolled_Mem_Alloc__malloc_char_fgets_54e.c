void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    data = 20;
    FUN0(data);
}
void FUN2(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = strtoul(inputBuffer, NULL, 0);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    FUN2(data);
}
void FUN5(size_t data);
void FUN6(size_t data)
{
    FUN5(data);
}
void FUN7(size_t data);
void FUN8(size_t data)
{
    FUN7(data);
}
void FUN9(size_t data);
void FUN5(size_t data)
{
    FUN9(data);
}
void FUN11(size_t data);
void FUN7(size_t data)
{
    FUN11(data);
}
void FUN6(size_t data);
void FUN0(size_t data)
{
    FUN6(data);
}
void FUN8(size_t data);
void FUN2(size_t data)
{
    FUN8(data);
}
void FUN9(size_t data)
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
void FUN11(size_t data)
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
