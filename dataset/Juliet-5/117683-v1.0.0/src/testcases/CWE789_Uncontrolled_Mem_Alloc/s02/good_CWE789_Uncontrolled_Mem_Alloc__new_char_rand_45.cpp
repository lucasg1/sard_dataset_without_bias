namespace NAMESPACE0
{
static size_t VAR1;
static size_t VAR2;
static size_t VAR3;
void FUN0()
{
    size_t data = VAR2;
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = new char[data];
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
    data = 20;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    size_t data = VAR3;
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = new char[data];
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
void FUN3()
{
    size_t data;
    data = 0;
    data = rand();
    VAR3 = data;
    FUN2();
}
} 
