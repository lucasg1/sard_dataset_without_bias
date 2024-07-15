typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE426_Untrusted_Search_Path__wchar_t_popen_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE426_Untrusted_Search_Path__wchar_t_popen_34_unionType myUnion;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, GOOD_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            FILE *pipe;
            pipe = POPEN(data, L"wb");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
