static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(HANDLE data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
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
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(HANDLE data)
{
    if(VAR1)
    {
        ; 
    }
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
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(HANDLE data)
{
    if(VAR2)
    {
        CloseHandle(data);
    }
}
void FUN5()
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
    VAR2 = 1; 
    FUN4(data);
}
