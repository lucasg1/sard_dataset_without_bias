HANDLE FUN0(HANDLE data)
{
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    return data;
}
HANDLE FUN0(HANDLE data);
void FUN2()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE;
    data = FUN0(data);
    if (data != INVALID_HANDLE_VALUE)
    {
<START>
        fclose((FILE *)data);
<END>
    }
}
