namespace NAMESPACE0
{
static size_t FUN0(size_t data)
{
    data = rand();
    return data;
}
void FUN1()
{
    size_t data;
    data = 0;
    data = FUN0(data);
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
