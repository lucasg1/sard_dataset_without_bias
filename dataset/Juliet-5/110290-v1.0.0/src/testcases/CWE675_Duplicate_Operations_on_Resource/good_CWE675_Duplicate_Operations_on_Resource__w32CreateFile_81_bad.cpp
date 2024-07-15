namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(HANDLE data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(HANDLE data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(HANDLE data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(HANDLE data) const
{
    CloseHandle(data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(HANDLE data) const
{
    ; 
}
}
namespace NAMESPACE0
{
void FUN0()
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
