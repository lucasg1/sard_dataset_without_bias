namespace NAMESPACE0
{
size_t VAR1;
size_t VAR2;
size_t VAR3;
void FUN0();
void FUN1()
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
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern size_t VAR1;
extern size_t VAR2;
extern size_t VAR3;
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
} 
