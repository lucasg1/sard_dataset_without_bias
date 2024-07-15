void FUN0()
{
    int data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = 5;
    printIntLine(data);
}
void FUN1()
{
    int data;
    goto source;
source:
    data = 5;
    goto sink;
sink:
    printIntLine(data);
}
