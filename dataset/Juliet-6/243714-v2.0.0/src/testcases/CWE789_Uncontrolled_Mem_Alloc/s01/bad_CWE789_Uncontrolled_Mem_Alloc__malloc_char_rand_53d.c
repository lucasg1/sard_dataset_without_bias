void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    FUN0(data);
}
void FUN2(size_t data);
void FUN0(size_t data)
{
    FUN2(data);
}
void FUN4(size_t data);
void FUN2(size_t data)
{
    FUN4(data);
}
void FUN4(size_t data)
{
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = (char *)malloc(data*sizeof(char));
<END>
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
