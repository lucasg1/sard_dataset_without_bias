void FUN0()
{
    twoIntsStruct data;
    goto source;
source:
    ; 
    goto sink;
sink:
<START>
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
<END>
}
