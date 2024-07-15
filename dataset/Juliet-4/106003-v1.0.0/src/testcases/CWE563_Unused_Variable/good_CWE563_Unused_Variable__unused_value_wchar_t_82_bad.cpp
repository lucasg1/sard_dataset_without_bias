namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t data)
{
    data = L'Z';
    printf("%02lx\n", data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t data;
    data = L'W';
    printf("%02lx\n", data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    wchar_t data;
    data = L'W';
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(wchar_t data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(wchar_t data)
{
    printf("%02lx\n", data);
}
}
