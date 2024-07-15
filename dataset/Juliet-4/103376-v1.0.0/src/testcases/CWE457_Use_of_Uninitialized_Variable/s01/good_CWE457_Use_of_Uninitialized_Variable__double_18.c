void FUN0()
{
    double data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = 5.0;
    printDoubleLine(data);
}
void FUN1()
{
    double data;
    goto source;
source:
    data = 5.0;
    goto sink;
sink:
    printDoubleLine(data);
}
