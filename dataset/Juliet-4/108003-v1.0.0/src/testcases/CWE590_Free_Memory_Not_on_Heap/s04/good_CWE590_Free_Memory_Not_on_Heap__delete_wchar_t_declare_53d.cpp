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
void FUN3()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data)
{
    printWcharLine(*data);
    delete data;
}
} 
