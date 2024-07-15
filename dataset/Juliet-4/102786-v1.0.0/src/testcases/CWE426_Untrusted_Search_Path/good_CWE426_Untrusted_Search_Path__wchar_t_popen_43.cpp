namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscpy(data, GOOD_OS_COMMAND);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN0(data);
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
