namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
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
