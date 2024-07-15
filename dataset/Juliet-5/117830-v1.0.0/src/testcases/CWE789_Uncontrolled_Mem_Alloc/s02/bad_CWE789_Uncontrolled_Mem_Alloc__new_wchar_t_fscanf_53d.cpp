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
void FUN2(size_t data);
void FUN0(size_t data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(size_t data)
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
