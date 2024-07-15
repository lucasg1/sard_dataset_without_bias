namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int[100];
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int * data) const
{
    free(data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data) const
{
    delete [] data;
}
}
