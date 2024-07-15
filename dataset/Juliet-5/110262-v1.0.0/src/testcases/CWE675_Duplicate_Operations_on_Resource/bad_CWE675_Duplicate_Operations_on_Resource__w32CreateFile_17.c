void FUN0()
{
    int i,j;
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    for(i = 0; i < 1; i++)
    {
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        CloseHandle(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        CloseHandle(data);
<END>
    }
}
