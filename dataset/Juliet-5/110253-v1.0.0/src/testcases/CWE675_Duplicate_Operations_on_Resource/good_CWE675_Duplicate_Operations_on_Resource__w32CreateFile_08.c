static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(FUN0())
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
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(FUN0())
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
    if(FUN0())
    {
        ; 
    }
}
void FUN4()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CreateFile("GoodSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
    }
    if(FUN0())
    {
        CloseHandle(data);
    }
}
void FUN5()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(FUN0())
    {
        data = CreateFile("GoodSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
    }
    if(FUN0())
    {
        CloseHandle(data);
    }
}
