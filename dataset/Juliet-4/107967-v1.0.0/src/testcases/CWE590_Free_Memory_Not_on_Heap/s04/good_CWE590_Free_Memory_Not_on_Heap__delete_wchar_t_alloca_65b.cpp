namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL; 
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    printWcharLine(*data);
    delete data;
}
} 
