namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass[100];
    }
    if(globalTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
