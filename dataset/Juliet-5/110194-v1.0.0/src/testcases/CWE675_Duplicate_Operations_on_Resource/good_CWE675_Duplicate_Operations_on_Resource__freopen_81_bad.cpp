namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(FILE * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(FILE * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(FILE * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(FILE * data) const
{
    ; 
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(FILE * data) const
{
    fclose(data);
}
}
