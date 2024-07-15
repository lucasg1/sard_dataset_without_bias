void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
void FUN1(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%zu", &data);
    FUN1(data);
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
