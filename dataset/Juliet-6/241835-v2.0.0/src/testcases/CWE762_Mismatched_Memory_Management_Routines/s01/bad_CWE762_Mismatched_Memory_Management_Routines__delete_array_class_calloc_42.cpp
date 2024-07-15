namespace NAMESPACE0
{
static TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
