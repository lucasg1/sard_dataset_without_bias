namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    delete data;
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
