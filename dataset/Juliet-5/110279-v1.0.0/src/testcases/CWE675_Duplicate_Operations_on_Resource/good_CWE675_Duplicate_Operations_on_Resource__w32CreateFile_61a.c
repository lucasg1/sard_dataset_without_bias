HANDLE FUN0(HANDLE data)
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
HANDLE FUN1(HANDLE data)
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
HANDLE FUN0(HANDLE data);
void FUN3()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    data = FUN0(data);
    CloseHandle(data);
}
HANDLE FUN1(HANDLE data);
void FUN5()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    data = FUN1(data);
    ; 
}
