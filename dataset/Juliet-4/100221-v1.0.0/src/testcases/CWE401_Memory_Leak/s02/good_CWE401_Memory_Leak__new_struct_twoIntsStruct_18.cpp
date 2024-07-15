namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    struct _twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    goto sink;
sink:
    ; 
}
} 
