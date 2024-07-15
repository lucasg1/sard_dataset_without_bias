void FUN0()
{
    int count;
    count = -1;
    goto source;
source:
    count = RAND32();
    goto sink;
sink:
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
