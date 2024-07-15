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
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        destLen = wcslen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
}
} 
