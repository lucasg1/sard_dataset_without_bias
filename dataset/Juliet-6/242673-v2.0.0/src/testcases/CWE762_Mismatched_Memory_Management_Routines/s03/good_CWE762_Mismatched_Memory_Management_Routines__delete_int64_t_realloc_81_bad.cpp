namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int64_t * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int64_t * data) const
{
    free(data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t * data) const
{
    delete data;
}
}
