typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE665_Improper_Initialization__wchar_t_cat_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE665_Improper_Initialization__wchar_t_cat_34_unionType myUnion;
    wchar_t dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
            wcscat(data, source);
            printWLine(data);
        }
    }
}
