namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    printIntLine(data->intOne);
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
    ; 
}
} 
