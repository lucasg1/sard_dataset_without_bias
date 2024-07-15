void FUN0(HANDLE dataArray[]);
void FUN1()
{
    HANDLE data;
    HANDLE dataArray[5];
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(HANDLE dataArray[])
{
    HANDLE data = dataArray[2];
    if (data != INVALID_HANDLE_VALUE)
    {
<START>
        fclose((FILE *)data);
<END>
    }
}
