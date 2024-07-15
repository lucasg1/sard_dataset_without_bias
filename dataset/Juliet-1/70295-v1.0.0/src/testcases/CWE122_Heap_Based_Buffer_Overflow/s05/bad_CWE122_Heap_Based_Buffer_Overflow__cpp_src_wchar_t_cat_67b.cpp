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
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
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
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
