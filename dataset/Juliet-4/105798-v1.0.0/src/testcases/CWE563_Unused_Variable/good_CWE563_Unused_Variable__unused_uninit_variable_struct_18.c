void FUN0()
{
    twoIntsStruct data;
    ; 
    goto sink;
sink:
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
}
