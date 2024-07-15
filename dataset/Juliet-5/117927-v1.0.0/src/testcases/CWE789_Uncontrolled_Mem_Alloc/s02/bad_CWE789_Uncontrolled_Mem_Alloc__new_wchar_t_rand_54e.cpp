namespace NAMESPACE0
{
void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(size_t data);
void FUN3(size_t data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(size_t data);
void FUN0(size_t data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(size_t data);
void FUN7()
{
    size_t data;
    data = 0;
    data = rand();
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(size_t data)
{
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
