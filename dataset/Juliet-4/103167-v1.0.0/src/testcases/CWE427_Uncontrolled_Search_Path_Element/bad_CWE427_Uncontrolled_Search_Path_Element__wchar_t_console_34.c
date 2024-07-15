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
    {
        size_t dataLen = wcslen(data);
        if (250-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(250-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
        }
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
        PUTENV(data);
<END>
    }
}
