typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE126_Buffer_Overread__wchar_t_declare_loop_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE126_Buffer_Overread__wchar_t_declare_loop_34_unionType myUnion;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    wmemset(dataBadBuffer, L'A', 50-1); 
    dataBadBuffer[50-1] = L'\0'; 
    wmemset(dataGoodBuffer, L'A', 100-1); 
    dataGoodBuffer[100-1] = L'\0'; 
    data = dataBadBuffer;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            size_t i, destLen;
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; 
            destLen = wcslen(dest);
            for (i = 0; i < destLen; i++)
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
