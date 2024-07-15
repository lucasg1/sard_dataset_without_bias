namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    TwoIntsClass * data = VAR3;
    free(data);
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    VAR3 = data;
    FUN2();
}
} 
