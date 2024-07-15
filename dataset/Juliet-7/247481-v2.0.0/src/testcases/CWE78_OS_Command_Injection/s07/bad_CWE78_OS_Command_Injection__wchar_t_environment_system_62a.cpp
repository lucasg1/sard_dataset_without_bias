namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    FUN0(data);
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
