namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
