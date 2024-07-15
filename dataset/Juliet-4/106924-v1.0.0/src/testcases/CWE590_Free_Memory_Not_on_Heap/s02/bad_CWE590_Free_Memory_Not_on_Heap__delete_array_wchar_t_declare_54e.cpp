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
        wchar_t dataBuffer[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data)
{
    printWLine(data);
<START>
    delete [] data;
<END>
}
} 
