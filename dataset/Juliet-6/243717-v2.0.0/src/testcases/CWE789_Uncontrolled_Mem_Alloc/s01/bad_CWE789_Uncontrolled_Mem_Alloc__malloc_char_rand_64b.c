void FUN0(void * dataVoidPtr);
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    size_t * dataPtr = (size_t *)dataVoidPtr;
    size_t data = (*dataPtr);
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
