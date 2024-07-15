namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass;
    }
    if(globalTrue)
    {
<START>
        free(data);
<END>
    }
}
} 
