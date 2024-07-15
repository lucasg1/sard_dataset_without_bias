namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    printIntLine(data->intOne);
}
void FUN2(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
