namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    delete [] data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    TwoIntsClass * data = VAR3;
    delete data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    VAR3 = data;
    FUN2();
}
} 
