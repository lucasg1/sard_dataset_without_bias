namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
