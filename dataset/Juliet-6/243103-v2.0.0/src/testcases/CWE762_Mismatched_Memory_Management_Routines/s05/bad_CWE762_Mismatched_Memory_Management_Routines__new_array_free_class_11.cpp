namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass[100];
    }
    if(globalReturnsTrue())
    {
<START>
        free(data);
<END>
    }
}
} 
