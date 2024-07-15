namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
}
void FUN1(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
    delete [] data;
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
    ; 
}
} 
