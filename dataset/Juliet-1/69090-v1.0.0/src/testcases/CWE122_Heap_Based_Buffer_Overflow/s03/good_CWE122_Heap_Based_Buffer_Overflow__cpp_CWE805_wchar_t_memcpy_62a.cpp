namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[100];
    data[0] = L'\0'; 
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
}
} 
