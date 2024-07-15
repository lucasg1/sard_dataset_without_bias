void FUN0()
{
    int * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printIntLine(*data);
<END>
}
