HANDLE VAR0;
HANDLE VAR1;
HANDLE VAR2;
void FUN0();
void FUN1();
void FUN2()
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
    FUN1();
}
extern HANDLE VAR0;
extern HANDLE VAR1;
extern HANDLE VAR2;
void FUN0()
{
    HANDLE data = VAR1;
    CloseHandle(data);
}
void FUN1()
{
    HANDLE data = VAR2;
    ; 
}
