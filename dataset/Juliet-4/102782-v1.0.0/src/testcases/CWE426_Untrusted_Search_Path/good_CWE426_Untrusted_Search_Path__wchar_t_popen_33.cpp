namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, GOOD_OS_COMMAND);
    {
        wchar_t * data = dataRef;
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
} 
