void FUN0()
{
    twoIntsStruct data;
    goto source;
source:
    data.intOne = 0;
    data.intTwo = 0;
    goto sink;
sink:
    printStructLine(&data);
}
void FUN1()
{
    twoIntsStruct data;
    goto source;
source:
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    goto sink;
sink:
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
