void FUN0(size_t data);
void FUN1()
{
    size_t data;
    void (*funcPtr) (size_t) = FUN0;
    data = 0;
    fscanf(stdin, "%zu", &data);
    funcPtr(data);
}
void FUN0(size_t data)
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
