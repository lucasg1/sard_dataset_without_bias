typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_34_unionType myUnion;
    data = NULL; 
    {
        static wchar_t dataBuffer[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        printWLine(data);
<START>
        free(data);
<END>
    }
}
