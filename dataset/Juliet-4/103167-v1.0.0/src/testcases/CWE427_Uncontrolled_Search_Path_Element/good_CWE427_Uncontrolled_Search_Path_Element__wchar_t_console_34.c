typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_34_unionType myUnion;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    wcscat(data, NEW_PATH);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        PUTENV(data);
    }
}
