namespace NAMESPACE0
{
void FUN0(HANDLE &data)
{
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
}
} 
namespace NAMESPACE0
{
void FUN0(HANDLE &data);
void FUN2()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    FUN0(data);
<START>
    CloseHandle(data);
<END>
}
} 
