namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(char * data) const
{
    delete data;
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data) const
{
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
