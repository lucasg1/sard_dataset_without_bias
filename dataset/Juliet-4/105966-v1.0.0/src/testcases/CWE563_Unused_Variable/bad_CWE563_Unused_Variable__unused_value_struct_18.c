void FUN0()
{
    twoIntsStruct data;
    goto source;
source:
    data.intOne = 0;
    data.intTwo = 0;
    goto sink;
sink:
<START>
    data.intOne = 1;
<END>
    data.intTwo = 1;
    printStructLine(&data);
}
