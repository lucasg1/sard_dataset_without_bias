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
void FUN1()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    FUN0(data);
<START>
    CloseHandle(data);
<END>
}
} 
