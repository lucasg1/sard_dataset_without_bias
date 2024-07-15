typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE124_Buffer_Underwrite__wchar_t_declare_loop_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE124_Buffer_Underwrite__wchar_t_declare_loop_34_unionType myUnion;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
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
                data[i] = source[i];
            }
            data[100-1] = L'\0';
            printWLine(data);
        }
    }
}
