typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_34_unionType myUnion;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}
void FUN1()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_34_unionType myUnion;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, L"%s", data);
            printWLine(dest);
        }
    }
}
