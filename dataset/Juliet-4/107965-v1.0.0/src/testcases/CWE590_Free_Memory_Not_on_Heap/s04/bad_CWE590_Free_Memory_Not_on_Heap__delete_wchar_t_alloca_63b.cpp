namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = (wchar_t *)ALLOCA(sizeof(wchar_t));
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
