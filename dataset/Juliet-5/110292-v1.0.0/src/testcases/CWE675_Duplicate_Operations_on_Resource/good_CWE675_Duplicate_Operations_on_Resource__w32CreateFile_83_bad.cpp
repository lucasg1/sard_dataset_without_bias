namespace NAMESPACE0
{
void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    NAMESPACE0_FUN0 VAR1(data);
}
void FUN1()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    NAMESPACE0_FUN1 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(HANDLE dataCopy)
{
    data = dataCopy;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    ; 
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(HANDLE dataCopy);
    ~NAMESPACE0_FUN0();
private:
    HANDLE data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(HANDLE dataCopy);
    ~NAMESPACE0_FUN1();
private:
    HANDLE data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(HANDLE dataCopy)
{
    data = dataCopy;
    data = CreateFile("GoodSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    CloseHandle(data);
}
}
