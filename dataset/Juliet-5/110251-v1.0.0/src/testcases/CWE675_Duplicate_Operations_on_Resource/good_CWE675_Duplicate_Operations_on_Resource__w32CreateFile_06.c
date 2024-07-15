static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN2()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        CloseHandle(data);
    }
}
void FUN3()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(STATIC_CONST_FIVE==5)
    {
        data = CreateFile("GoodSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
    }
    if(STATIC_CONST_FIVE==5)
    {
        CloseHandle(data);
    }
}
