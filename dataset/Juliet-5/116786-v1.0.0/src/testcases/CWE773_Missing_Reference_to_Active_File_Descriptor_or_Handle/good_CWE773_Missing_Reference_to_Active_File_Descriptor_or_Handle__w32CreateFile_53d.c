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
    FUN0(data);
}
void FUN3(HANDLE data);
void FUN4(HANDLE data)
{
    FUN3(data);
}
void FUN4(HANDLE data);
void FUN0(HANDLE data)
{
    FUN4(data);
}
void FUN3(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
    data = CreateFile("GoodSink_w32CreateFile.txt",
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
