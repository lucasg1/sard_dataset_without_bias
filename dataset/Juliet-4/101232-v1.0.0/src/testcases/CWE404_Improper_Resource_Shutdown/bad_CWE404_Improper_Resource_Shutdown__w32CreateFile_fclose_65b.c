void FUN0(HANDLE data);
void FUN1()
{
    HANDLE data;
    void (*funcPtr) (HANDLE) = FUN0;
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    funcPtr(data);
}
void FUN0(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
<START>
        fclose((FILE *)data);
<END>
    }
}
