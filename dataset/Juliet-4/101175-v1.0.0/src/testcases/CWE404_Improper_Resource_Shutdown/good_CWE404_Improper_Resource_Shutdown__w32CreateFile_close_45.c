static HANDLE VAR0;
static HANDLE VAR1;
void FUN0()
{
    HANDLE data = VAR1;
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
}
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
    VAR1 = data;
    FUN0();
}
