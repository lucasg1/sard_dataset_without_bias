void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    while(1)
    {
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        CloseHandle(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    while(1)
    {
        data = CreateFile("GoodSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        break;
    }
    while(1)
    {
        CloseHandle(data);
        break;
    }
}
