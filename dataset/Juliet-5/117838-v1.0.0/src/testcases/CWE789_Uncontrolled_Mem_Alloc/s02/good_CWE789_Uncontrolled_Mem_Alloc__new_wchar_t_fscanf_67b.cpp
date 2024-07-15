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
    data = 20;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    size_t data;
    structType myStruct;
    data = 0;
    fscanf(stdin, "%ud", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
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
void FUN2(structType myStruct)
{
    size_t data = myStruct.structFirst;
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
