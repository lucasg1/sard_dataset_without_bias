HANDLE VAR0;
HANDLE VAR1;
HANDLE VAR2;
void FUN0();
void FUN1()
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
    VAR0 = data;
    FUN0();
}
extern HANDLE VAR0;
extern HANDLE VAR1;
extern HANDLE VAR2;
void FUN0()
{
    HANDLE data = VAR0;
<START>
    CloseHandle(data);
<END>
}
