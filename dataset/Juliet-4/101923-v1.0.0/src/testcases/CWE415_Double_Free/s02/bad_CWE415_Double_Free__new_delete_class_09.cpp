namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new TwoIntsClass;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        delete data;
<END>
    }
}
} 
