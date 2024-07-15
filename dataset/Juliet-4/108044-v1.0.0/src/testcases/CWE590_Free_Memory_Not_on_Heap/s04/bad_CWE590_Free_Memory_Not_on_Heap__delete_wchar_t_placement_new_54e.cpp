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
        char buffer[sizeof(wchar_t)];
        wchar_t * dataBuffer = new(buffer) wchar_t;
        *dataBuffer = L'A';
        data = dataBuffer;
    }
    FUN2(data);
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
void FUN1(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data)
{
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
