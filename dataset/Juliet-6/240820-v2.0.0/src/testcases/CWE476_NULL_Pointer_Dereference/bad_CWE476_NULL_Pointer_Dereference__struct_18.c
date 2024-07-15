void FUN0()
{
    twoIntsStruct * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printIntLine(data->intOne);
<END>
}
