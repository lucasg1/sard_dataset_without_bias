void FUN0(HANDLE data);
void FUN1(HANDLE data)
{
    FUN0(data);
}
void FUN2(HANDLE data);
void FUN0(HANDLE data)
{
    FUN2(data);
}
void FUN1(HANDLE data);
void FUN5()
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
    FUN1(data);
}
void FUN2(HANDLE data)
{
<START>
<END>
    ; 
}
