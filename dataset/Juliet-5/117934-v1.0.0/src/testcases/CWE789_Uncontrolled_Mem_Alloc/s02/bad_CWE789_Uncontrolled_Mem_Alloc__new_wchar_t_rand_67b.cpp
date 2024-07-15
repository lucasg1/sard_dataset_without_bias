namespace NAMESPACE0
{
typedef struct _structType
{
    size_t structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    size_t data;
    structType myStruct;
    data = 0;
    data = rand();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    size_t structFirst;
} structType;
void FUN0(structType myStruct)
{
    size_t data = myStruct.structFirst;
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
