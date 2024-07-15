namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    goto sink;
sink:
    printStructLine(data);
}
} 
