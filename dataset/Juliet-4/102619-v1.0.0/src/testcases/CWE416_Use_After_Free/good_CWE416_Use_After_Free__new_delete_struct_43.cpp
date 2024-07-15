namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    printStructLine(data);
}
void FUN2(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
