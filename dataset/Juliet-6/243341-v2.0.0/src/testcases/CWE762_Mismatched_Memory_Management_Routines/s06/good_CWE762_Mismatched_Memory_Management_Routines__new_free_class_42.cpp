namespace NAMESPACE0
{
static TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
static TwoIntsClass * FUN2(TwoIntsClass * data)
{
    data = new TwoIntsClass;
    return data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN2(data);
    delete data;
}
} 
