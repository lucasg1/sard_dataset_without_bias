namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
}
void FUN1(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
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
    printIntLine(data->intOne);
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
