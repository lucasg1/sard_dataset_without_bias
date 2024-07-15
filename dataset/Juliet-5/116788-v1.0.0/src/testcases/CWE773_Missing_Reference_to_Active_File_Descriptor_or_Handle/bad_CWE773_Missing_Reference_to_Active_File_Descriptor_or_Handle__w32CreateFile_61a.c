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
