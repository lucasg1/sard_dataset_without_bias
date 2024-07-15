namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = new wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN7(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN7(wchar_t * data)
{
    printWcharLine(*data);
    delete data;
}
} 
