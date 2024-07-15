void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(globalTrue)
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
    if(globalTrue)
    {
<START>
        CloseHandle(data);
<END>
    }
}
