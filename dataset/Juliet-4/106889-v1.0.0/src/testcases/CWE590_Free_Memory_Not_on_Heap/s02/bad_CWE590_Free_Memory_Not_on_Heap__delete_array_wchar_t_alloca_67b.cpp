namespace NAMESPACE0
{
typedef struct _structType
{
    wchar_t * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    wchar_t * data;
    structType myStruct;
    data = NULL; 
    {
        wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    wchar_t * structFirst;
} structType;
void FUN0(structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    printWLine(data);
<START>
    delete [] data;
<END>
}
} 
