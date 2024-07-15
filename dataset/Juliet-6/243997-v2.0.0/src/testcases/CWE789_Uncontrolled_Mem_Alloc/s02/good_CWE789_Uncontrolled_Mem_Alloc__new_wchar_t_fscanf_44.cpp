namespace NAMESPACE0
{
void FUN0(size_t data)
{
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
void FUN1()
{
    size_t data;
    void (*funcPtr) (size_t) = FUN0;
    data = 0;
    data = 20;
    funcPtr(data);
}
void FUN2(size_t data)
{
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
void FUN3()
{
    size_t data;
    void (*funcPtr) (size_t) = FUN2;
    data = 0;
    fscanf(stdin, "%zu", &data);
    funcPtr(data);
}
} 
