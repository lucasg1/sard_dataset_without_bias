namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[50];
    data[0] = L'\0'; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncat(data, source, 100);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
