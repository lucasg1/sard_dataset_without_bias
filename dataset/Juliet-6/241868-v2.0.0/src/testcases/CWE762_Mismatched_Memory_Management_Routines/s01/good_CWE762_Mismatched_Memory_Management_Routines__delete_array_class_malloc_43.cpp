namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN2(TwoIntsClass * &data)
{
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
