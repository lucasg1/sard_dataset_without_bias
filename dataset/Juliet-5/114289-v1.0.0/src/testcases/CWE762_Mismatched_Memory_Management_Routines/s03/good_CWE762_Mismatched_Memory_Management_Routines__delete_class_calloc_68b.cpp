namespace NAMESPACE0
{
TwoIntsClass * VAR1;
TwoIntsClass * VAR2;
TwoIntsClass * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern TwoIntsClass * VAR1;
extern TwoIntsClass * VAR2;
extern TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    delete data;
}
void FUN1()
{
    TwoIntsClass * data = VAR3;
    free(data);
}
} 
