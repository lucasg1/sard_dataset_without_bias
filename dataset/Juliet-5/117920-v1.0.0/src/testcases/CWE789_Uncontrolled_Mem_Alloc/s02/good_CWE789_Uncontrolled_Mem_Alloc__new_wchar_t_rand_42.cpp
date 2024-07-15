namespace NAMESPACE0
{
static size_t FUN0(size_t data)
{
    data = 20;
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
            myString = new wchar_t[data];
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
static size_t FUN2(size_t data)
{
    data = rand();
    return data;
}
void FUN3()
{
    size_t data;
    data = 0;
    data = FUN2(data);
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = new wchar_t[data];
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 
