void FUN0()
{
    long data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = 5L;
    printLongLine(data);
}
void FUN1()
{
    long data;
    goto source;
source:
    data = 5L;
    goto sink;
sink:
    printLongLine(data);
}
