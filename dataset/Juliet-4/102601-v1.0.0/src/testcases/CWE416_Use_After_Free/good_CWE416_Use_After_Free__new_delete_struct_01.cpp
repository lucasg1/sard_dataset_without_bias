namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    printStructLine(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
    ; 
}
} 
