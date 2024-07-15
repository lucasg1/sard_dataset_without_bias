namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN0(data);
}
} 
