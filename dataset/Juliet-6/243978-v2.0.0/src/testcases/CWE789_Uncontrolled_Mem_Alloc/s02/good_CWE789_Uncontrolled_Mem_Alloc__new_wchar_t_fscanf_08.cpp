static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    size_t data;
    data = 0;
    if(FUN0())
    {
        fscanf(stdin, "%zu", &data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN3()
{
    size_t data;
    data = 0;
    if(FUN0())
    {
        fscanf(stdin, "%zu", &data);
    }
    if(FUN0())
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
}
void FUN4()
{
    size_t data;
    data = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(FUN0())
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
}
void FUN5()
{
    size_t data;
    data = 0;
    if(FUN0())
    {
        data = 20;
    }
    if(FUN0())
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
}
} 
