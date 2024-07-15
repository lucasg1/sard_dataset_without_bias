namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
