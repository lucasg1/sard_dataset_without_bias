void FUN0()
{
    twoIntsStruct data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN1()
{
    twoIntsStruct data;
    goto source;
source:
    data.intOne = 1;
    data.intTwo = 2;
    goto sink;
sink:
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
