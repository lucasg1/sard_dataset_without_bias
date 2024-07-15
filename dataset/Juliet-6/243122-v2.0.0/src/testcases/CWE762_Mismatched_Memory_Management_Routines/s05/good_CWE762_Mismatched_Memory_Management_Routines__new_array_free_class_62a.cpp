namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
}
void FUN1(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    free(data);
}
void FUN1(TwoIntsClass * &data);
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    FUN1(data);
    delete [] data;
}
} 
