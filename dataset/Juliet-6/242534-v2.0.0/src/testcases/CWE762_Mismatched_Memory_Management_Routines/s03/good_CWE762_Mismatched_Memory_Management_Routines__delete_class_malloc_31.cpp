namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        free(data);
    }
}
} 
