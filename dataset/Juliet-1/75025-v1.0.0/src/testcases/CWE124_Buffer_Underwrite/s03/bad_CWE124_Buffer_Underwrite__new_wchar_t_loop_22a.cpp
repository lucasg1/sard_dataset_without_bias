namespace NAMESPACE0
{
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            data = dataBuffer - 8;
        }
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = L'\0';
        printWLine(data);
    }
    ;
}
} 
