namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = (wchar_t *)ALLOCA(sizeof(wchar_t));
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN3(data);
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
