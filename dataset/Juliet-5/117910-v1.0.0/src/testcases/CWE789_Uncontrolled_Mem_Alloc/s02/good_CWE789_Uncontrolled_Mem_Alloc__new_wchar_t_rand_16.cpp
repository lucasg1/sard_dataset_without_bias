namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    while(1)
    {
        data = rand();
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    size_t data;
    data = 0;
    while(1)
    {
        data = 20;
        break;
    }
    while(1)
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
        break;
    }
}
} 
