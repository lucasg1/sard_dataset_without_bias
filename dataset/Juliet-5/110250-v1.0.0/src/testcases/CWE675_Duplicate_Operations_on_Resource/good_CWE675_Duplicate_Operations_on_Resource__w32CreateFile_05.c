static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(staticTrue)
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
    if(staticFalse)
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
    if(staticTrue)
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
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(staticFalse)
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
    if(staticTrue)
    {
        CloseHandle(data);
    }
}
void FUN3()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(staticTrue)
    {
        data = CreateFile("GoodSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
    }
    if(staticTrue)
    {
        CloseHandle(data);
    }
}
