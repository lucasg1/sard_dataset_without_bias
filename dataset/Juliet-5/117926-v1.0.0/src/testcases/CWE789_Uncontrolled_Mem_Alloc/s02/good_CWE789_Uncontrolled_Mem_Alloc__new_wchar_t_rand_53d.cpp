namespace NAMESPACE0
{
void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    data = 20;
    FUN0(data);
}
void FUN2(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    data = rand();
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(size_t data);
void FUN0(size_t data)
{
    FUN5(data);
}
void FUN7(size_t data);
void FUN2(size_t data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(size_t data);
void FUN5(size_t data)
{
    FUN9(data);
}
void FUN11(size_t data);
void FUN7(size_t data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(size_t data)
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
void FUN11(size_t data)
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
