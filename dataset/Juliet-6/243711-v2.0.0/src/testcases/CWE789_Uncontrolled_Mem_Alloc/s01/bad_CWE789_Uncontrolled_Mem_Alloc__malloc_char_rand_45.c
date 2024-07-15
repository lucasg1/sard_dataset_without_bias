static size_t VAR0;
static size_t VAR1;
static size_t VAR2;
void FUN0()
{
    size_t data = VAR0;
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
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR0 = data;
    FUN0();
}
