namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    TwoIntsClass VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    goto sink;
sink:
    ; 
}
} 
