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
void FUN4(size_t data);
void FUN0(size_t data)
{
    FUN4(data);
}
void FUN6(size_t data);
void FUN2(size_t data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(size_t data);
void FUN9()
{
    size_t data;
    data = 0;
    data = 20;
    FUN1(data);
}
void FUN3(size_t data);
void FUN11()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN13(size_t data);
void FUN4(size_t data)
{
    FUN13(data);
}
void FUN15(size_t data);
void FUN6(size_t data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(size_t data)
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
void FUN15(size_t data)
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
