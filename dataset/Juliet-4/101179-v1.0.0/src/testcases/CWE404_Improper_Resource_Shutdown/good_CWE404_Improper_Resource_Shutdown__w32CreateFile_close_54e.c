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
void FUN0(HANDLE data)
{
    FUN3(data);
}
void FUN5(HANDLE data);
void FUN6(HANDLE data)
{
    FUN5(data);
}
void FUN6(HANDLE data);
void FUN3(HANDLE data)
{
    FUN6(data);
}
void FUN5(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
}
