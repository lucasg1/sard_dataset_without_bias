namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    data = new TwoIntsClass;
    funcPtr(data);
}
void FUN2(TwoIntsClass * data)
{
    free(data);
}
void FUN3()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN2;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
