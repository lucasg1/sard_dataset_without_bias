int VAR0 = 0;
void FUN0(HANDLE data);
void FUN1()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(HANDLE data)
{
    if(VAR0)
    {
<START>
        CloseHandle(data);
<END>
    }
}
