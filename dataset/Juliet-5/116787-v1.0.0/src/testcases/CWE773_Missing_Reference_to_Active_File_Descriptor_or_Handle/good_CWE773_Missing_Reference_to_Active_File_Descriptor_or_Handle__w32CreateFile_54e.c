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
void FUN5(HANDLE data);
void FUN0(HANDLE data)
{
    FUN5(data);
}
void FUN7(HANDLE data);
void FUN5(HANDLE data)
{
    FUN7(data);
}
void FUN7(HANDLE data)
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
