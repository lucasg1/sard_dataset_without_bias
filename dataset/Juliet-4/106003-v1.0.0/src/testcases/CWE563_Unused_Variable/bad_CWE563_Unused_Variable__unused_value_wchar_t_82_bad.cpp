namespace NAMESPACE0
{
void FUN0()
{
    wchar_t data;
    data = L'W';
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
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
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t data)
{
<START>
    data = L'Z';
<END>
    printf("%02lx\n", data);
}
}
