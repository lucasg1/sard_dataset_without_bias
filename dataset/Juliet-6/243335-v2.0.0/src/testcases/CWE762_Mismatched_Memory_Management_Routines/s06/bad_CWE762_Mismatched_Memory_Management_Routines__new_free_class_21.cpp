namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    VAR1 = 1; 
    FUN0(data);
}
} 
