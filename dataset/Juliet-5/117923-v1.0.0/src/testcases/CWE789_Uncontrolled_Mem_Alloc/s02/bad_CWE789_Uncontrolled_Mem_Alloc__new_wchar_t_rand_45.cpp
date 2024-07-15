namespace NAMESPACE0
{
static size_t VAR1;
static size_t VAR2;
static size_t VAR3;
void FUN0()
{
    size_t data = VAR1;
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
<START>
            myString = new wchar_t[data];
<END>
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
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
    data = rand();
    VAR1 = data;
    FUN0();
}
} 
