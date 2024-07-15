namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    {
        wchar_t * data = dataRef;
        {
            FILE *pipe;
            pipe = POPEN(data, L"w");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
} 
