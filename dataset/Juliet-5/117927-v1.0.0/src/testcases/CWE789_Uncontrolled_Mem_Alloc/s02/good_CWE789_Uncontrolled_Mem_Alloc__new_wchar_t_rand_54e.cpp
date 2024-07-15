namespace NAMESPACE0
{
void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
void FUN2(size_t data);
void FUN3(size_t data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(size_t data);
void FUN5(size_t data)
{
    FUN1(data);
}
void FUN3(size_t data);
void FUN7(size_t data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN8(size_t data);
void FUN0(size_t data)
{
    FUN8(data);
}
void FUN10(size_t data);
void FUN2(size_t data)
{
    FUN10(data);
}
} 
namespace NAMESPACE0
{
void FUN5(size_t data);
void FUN13()
{
    size_t data;
    data = 0;
    data = 20;
    FUN5(data);
}
void FUN7(size_t data);
void FUN15()
{
    size_t data;
    data = 0;
    data = rand();
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN8(size_t data)
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
void FUN10(size_t data)
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
