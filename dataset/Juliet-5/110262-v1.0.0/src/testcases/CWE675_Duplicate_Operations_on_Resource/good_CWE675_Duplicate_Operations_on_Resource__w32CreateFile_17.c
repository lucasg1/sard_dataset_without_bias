void FUN0()
{
    int i,k;
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    for(i = 0; i < 1; i++)
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
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    for(h = 0; h < 1; h++)
    {
        data = CreateFile("GoodSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
    }
    for(j = 0; j < 1; j++)
    {
        CloseHandle(data);
    }
}
