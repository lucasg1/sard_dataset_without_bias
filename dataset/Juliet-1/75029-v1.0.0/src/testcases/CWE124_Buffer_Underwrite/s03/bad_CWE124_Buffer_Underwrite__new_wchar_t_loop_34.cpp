namespace NAMESPACE0
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
void FUN0()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
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
    }
}
} 
