namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    FUN0(data);
}
} 
