void FUN0()
{
    int64_t data;
    goto source;
source:
    data = 5LL;
    goto sink;
sink:
    printLongLongLine(data);
}
void FUN1()
{
    int64_t data;
    goto source;
source:
    data = 5LL;
    printLongLongLine(data);
    goto sink;
sink:
    data = 10LL;
    printLongLongLine(data);
}
