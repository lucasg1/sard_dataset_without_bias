void FUN0(HANDLE data);
void FUN1(HANDLE data)
{
    FUN0(data);
}
void FUN2(HANDLE data);
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
    FUN2(data);
}
void FUN1(HANDLE data);
void FUN2(HANDLE data)
{
    FUN1(data);
}
void FUN0(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
}
