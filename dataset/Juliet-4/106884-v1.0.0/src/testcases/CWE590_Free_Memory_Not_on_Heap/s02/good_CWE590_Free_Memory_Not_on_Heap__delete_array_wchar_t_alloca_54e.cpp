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
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
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
    printWLine(data);
    delete [] data;
}
} 
