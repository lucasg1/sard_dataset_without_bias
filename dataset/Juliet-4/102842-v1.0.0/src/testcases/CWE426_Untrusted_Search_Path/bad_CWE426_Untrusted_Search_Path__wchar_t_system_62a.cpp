namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscpy(data, BAD_OS_COMMAND);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN0(data);
<START>
    if (SYSTEM(data) <= 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
