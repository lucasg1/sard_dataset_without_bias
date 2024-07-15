namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        delete data;
<END>
    }
}
} 
