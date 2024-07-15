namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * data)
{
    free(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(wchar_t * data)
{
    ; 
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
