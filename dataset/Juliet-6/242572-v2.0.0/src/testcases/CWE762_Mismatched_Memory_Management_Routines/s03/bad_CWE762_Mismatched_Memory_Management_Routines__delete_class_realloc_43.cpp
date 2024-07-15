namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
