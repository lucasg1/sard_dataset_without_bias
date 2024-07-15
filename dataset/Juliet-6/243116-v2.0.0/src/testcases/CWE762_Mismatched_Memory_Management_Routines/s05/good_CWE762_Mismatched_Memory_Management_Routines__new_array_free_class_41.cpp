namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    free(data);
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
void FUN2(TwoIntsClass * data)
{
    delete [] data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN2(data);
}
} 
