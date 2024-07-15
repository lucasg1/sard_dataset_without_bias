void FUN0(HANDLE data);
void FUN1(HANDLE data)
{
    FUN0(data);
}
void FUN2(HANDLE data);
void FUN3(HANDLE data)
{
    FUN2(data);
}
void FUN4(HANDLE data);
void FUN5(HANDLE data)
{
    FUN4(data);
}
void FUN6(HANDLE data);
void FUN7(HANDLE data)
{
    FUN6(data);
}
void FUN5(HANDLE data);
void FUN0(HANDLE data)
{
    FUN5(data);
}
void FUN7(HANDLE data);
void FUN2(HANDLE data)
{
    FUN7(data);
}
void FUN1(HANDLE data);
void FUN13()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    data = CreateFile("GoodSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    FUN1(data);
}
void FUN3(HANDLE data);
void FUN15()
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
    CloseHandle(data);
    FUN3(data);
}
void FUN4(HANDLE data)
{
    CloseHandle(data);
}
void FUN6(HANDLE data)
{
    ; 
}
