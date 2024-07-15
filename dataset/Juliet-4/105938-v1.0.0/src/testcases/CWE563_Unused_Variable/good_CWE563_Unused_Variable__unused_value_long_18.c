void FUN0()
{
    long data;
    goto source;
source:
    data = 5L;
    goto sink;
sink:
    printLongLine(data);
}
void FUN1()
{
    long data;
    goto source;
source:
    data = 5L;
    printLongLine(data);
    goto sink;
sink:
    data = 10L;
    printLongLine(data);
}
