size_t VAR0;
size_t VAR1;
size_t VAR2;
void FUN0();
void FUN1()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%zu", &data);
    VAR0 = data;
    FUN0();
}
extern size_t VAR0;
extern size_t VAR1;
extern size_t VAR2;
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
