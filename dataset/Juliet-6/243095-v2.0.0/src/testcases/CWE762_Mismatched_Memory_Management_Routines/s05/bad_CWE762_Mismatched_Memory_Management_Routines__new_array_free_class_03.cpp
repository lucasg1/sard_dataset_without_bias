namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(5==5)
    {
        data = new TwoIntsClass[100];
    }
    if(5==5)
    {
<START>
        free(data);
<END>
    }
}
} 
