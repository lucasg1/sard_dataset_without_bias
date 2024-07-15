namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    free(data);
}
void FUN2(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN2(data);
    delete [] data;
}
} 
