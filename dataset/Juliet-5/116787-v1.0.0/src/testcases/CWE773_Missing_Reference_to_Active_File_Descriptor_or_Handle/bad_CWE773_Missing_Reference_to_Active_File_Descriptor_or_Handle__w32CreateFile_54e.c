void FUN0(HANDLE data);
void FUN1(HANDLE data)
{
    FUN0(data);
}
void FUN1(HANDLE data);
void FUN3()
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
    FUN1(data);
}
void FUN4(HANDLE data);
void FUN0(HANDLE data)
{
    FUN4(data);
}
void FUN6(HANDLE data);
void FUN4(HANDLE data)
{
    FUN6(data);
}
void FUN6(HANDLE data)
{
<START>
    data = CreateFile("BadSink_w32CreateFile.txt",
<END>
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
}
