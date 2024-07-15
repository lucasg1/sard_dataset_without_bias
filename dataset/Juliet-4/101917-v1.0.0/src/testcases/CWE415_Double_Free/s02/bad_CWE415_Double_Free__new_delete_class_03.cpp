namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(5==5)
    {
        data = new TwoIntsClass;
        delete data;
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
