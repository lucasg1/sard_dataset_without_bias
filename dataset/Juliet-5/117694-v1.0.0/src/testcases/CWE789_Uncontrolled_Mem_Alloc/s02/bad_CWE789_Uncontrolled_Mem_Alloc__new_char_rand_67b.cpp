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
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = new char[data];
<END>
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
} 
