namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    goto sink;
sink:
    ; 
}
} 
