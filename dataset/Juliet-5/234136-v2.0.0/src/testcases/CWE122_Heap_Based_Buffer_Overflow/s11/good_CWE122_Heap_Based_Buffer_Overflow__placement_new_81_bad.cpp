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
void FUN0()
{
    char * data;
    char * VAR2 = (char *)malloc(sizeof(OneIntClass));
    if (VAR2 == NULL) {exit(-1);}
    char * VAR3 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR3 == NULL) {exit(-1);}
    data = VAR3;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    char * data;
    char * VAR2 = (char *)malloc(sizeof(OneIntClass));
    if (VAR2 == NULL) {exit(-1);}
    char * VAR3 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR3 == NULL) {exit(-1);}
    data = VAR2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data) const
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(char * data) const
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
}
}
