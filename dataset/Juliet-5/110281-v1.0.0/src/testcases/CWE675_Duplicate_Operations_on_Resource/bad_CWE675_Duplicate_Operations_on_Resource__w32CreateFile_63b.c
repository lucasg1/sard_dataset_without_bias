void FUN0(HANDLE * dataPtr);
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
    FUN0(&data);
}
void FUN0(HANDLE * dataPtr)
{
    HANDLE data = *dataPtr;
<START>
    CloseHandle(data);
<END>
}
