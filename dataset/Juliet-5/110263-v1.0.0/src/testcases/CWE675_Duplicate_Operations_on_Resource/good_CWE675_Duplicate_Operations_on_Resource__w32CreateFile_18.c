void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    goto source;
source:
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
    goto sink;
sink:
    ; 
}
void FUN1()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    goto source;
source:
    data = CreateFile("GoodSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    goto sink;
sink:
    CloseHandle(data);
}
