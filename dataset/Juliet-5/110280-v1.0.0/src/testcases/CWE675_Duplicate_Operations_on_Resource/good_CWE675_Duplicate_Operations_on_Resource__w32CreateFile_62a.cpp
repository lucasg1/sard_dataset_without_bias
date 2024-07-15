namespace NAMESPACE0
{
void FUN0(HANDLE &data)
{
    data = CreateFile("GoodSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
}
void FUN1(HANDLE &data)
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
} 
namespace NAMESPACE0
{
void FUN0(HANDLE &data);
void FUN3()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    FUN0(data);
    CloseHandle(data);
}
void FUN1(HANDLE &data);
void FUN5()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    FUN1(data);
    ; 
}
} 
