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
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN6(data);
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
