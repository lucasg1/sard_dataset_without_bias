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
        static wchar_t dataBuffer;
        dataBuffer = L'A';
        data = &dataBuffer;
    }
    FUN1(data);
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
