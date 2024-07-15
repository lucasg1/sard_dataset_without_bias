void FUN0()
{
    twoIntsStruct * data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data->intOne = 5;
    data->intTwo = 6;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}
void FUN1()
{
    twoIntsStruct * data;
    goto source;
source:
    data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data->intOne = 5;
    data->intTwo = 6;
    goto sink;
sink:
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}
