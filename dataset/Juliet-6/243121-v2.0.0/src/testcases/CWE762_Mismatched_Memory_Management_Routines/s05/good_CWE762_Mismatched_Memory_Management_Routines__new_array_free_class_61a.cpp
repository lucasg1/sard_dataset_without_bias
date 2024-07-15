namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    return data;
}
TwoIntsClass * FUN1(TwoIntsClass * data)
{
    data = new TwoIntsClass[100];
    return data;
}
} 
namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
TwoIntsClass * FUN1(TwoIntsClass * data);
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN1(data);
    delete [] data;
}
} 
