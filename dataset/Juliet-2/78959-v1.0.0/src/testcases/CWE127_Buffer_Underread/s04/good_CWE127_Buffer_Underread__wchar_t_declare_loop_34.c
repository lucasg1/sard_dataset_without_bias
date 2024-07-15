typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE127_Buffer_Underread__wchar_t_declare_loop_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE127_Buffer_Underread__wchar_t_declare_loop_34_unionType myUnion;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            size_t i;
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1); 
            dest[100-1] = L'\0'; 
            for (i = 0; i < 100; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
