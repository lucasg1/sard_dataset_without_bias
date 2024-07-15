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
void FUN2(HANDLE data);
void FUN0(HANDLE data)
{
    FUN2(data);
}
void FUN4(HANDLE data);
void FUN5(HANDLE data)
{
    FUN4(data);
}
void FUN5(HANDLE data);
void FUN2(HANDLE data)
{
    FUN5(data);
}
void FUN4(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
<START>
        _close((int)data);
<END>
    }
}
