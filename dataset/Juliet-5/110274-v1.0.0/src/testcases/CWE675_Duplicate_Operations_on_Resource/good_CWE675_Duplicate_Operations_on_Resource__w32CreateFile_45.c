static HANDLE VAR0;
static HANDLE VAR1;
static HANDLE VAR2;
void FUN0()
{
    HANDLE data = VAR1;
    CloseHandle(data);
}
void FUN1()
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
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    HANDLE data = VAR2;
    ; 
}
void FUN3()
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
    VAR2 = data;
    FUN2();
}
