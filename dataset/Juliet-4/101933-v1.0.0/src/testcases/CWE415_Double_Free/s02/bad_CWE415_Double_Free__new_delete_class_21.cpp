namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
<START>
        delete data;
<END>
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    delete data;
    VAR1 = 1; 
    FUN0(data);
}
} 
