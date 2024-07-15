namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = L"Good";
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * data) const
{
    printWcharLine(data[0]);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(wchar_t * data) const
{
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
}
