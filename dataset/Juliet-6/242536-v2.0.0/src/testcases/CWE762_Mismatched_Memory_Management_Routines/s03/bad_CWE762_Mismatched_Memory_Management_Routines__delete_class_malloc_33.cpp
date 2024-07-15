namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    {
        TwoIntsClass * data = dataRef;
<START>
        delete data;
<END>
    }
}
} 
