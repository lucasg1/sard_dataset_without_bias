namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
