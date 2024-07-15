namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(HANDLE data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(HANDLE data);
};
}
namespace NAMESPACE0
{
void FUN0()
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(HANDLE data)
{
    if (data != INVALID_HANDLE_VALUE)
    {
        CloseHandle(data);
    }
}
}
