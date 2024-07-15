void FUN0()
{
    char data;
    goto source;
source:
    data = 'C';
    goto sink;
sink:
    printHexCharLine(data);
}
void FUN1()
{
    char data;
    goto source;
source:
    data = 'C';
    printHexCharLine(data);
    goto sink;
sink:
    data = 'Z';
    printHexCharLine(data);
}
