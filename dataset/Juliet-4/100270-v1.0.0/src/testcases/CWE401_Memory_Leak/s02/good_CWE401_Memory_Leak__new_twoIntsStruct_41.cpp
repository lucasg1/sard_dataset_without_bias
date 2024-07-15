namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    ; 
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    FUN0(data);
}
void FUN2(twoIntsStruct * data)
{
    delete data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    FUN2(data);
}
} 
