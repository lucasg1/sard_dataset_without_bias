namespace NAMESPACE0
{
static size_t VAR1;
static size_t VAR2;
static size_t VAR3;
void FUN0()
{
    size_t data = VAR1;
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = new char[data];
<END>
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
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
    fscanf(stdin, "%zu", &data);
    VAR1 = data;
    FUN0();
}
} 
