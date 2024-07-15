namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        delete [] data;
<END>
    }
    else
    {
        free(data);
    }
}
} 
