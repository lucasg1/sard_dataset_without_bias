namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = new TwoIntsClass;
        delete data;
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
