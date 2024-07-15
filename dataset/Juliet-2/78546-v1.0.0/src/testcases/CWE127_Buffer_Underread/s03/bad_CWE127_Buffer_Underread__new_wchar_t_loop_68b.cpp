wchar_t * VAR0;
wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    VAR0 = data;
    FUN0();
}
} 
extern wchar_t * VAR0;
extern wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    wchar_t * data = VAR0;
    {
        size_t i;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
} 
