typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_34_unionType myUnion;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 250-dataLen-1);
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
