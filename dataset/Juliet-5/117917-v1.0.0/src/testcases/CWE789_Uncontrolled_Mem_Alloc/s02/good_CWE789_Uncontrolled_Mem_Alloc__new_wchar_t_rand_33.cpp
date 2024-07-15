namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    size_t &dataRef = data;
    data = 0;
    data = 20;
    {
        size_t data = dataRef;
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
}
void FUN1()
{
    size_t data;
    size_t &dataRef = data;
    data = 0;
    data = rand();
    {
        size_t data = dataRef;
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
} 
