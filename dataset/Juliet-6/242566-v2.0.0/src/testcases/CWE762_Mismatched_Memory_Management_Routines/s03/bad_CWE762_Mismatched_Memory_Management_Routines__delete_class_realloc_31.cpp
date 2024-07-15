namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
