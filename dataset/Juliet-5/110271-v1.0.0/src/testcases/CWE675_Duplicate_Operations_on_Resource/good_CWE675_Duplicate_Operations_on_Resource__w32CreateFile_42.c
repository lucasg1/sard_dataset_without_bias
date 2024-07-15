static HANDLE FUN0(HANDLE data)
{
    data = CreateFile("GoodSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    return data;
}
void FUN1()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    data = FUN0(data);
    CloseHandle(data);
}
static HANDLE FUN2(HANDLE data)
{
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
    return data;
}
void FUN3()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    data = FUN2(data);
    ; 
}
