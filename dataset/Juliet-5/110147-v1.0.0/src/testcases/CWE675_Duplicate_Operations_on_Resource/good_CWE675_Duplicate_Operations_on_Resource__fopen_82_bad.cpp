namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(FILE * data)
{
    fclose(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(FILE * data)
{
    ; 
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(FILE * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(FILE * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(FILE * data);
};
}
