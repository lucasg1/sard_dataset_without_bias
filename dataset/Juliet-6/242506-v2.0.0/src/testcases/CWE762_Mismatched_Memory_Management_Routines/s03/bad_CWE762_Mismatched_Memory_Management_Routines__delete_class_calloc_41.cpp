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
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
