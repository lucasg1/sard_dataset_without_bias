namespace NAMESPACE0
{
void FUN0(size_t * dataPtr);
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(size_t * dataPtr)
{
    size_t data = *dataPtr;
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
