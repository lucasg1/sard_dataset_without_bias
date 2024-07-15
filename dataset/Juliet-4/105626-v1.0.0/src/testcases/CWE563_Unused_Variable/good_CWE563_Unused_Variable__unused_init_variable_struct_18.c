void FUN0()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    goto sink;
sink:
    printStructLine(&data);
}
