namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        char buffer[sizeof(wchar_t)];
        wchar_t * dataBuffer = new(buffer) wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
