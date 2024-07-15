namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
