namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
}
void FUN1(TwoIntsClass * &data)
{
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
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
    delete [] data;
}
void FUN1(TwoIntsClass * &data);
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
