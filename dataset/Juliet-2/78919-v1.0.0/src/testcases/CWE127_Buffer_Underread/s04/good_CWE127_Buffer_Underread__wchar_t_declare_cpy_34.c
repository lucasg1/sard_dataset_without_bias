typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE127_Buffer_Underread__wchar_t_declare_cpy_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE127_Buffer_Underread__wchar_t_declare_cpy_34_unionType myUnion;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[100*2];
            wmemset(dest, L'C', 100*2-1); 
            dest[100*2-1] = L'\0'; 
            wcscpy(dest, data);
            printWLine(dest);
        }
    }
}
