namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
    delete[] data;
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    int VAR1[100];
    data = VAR1;
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
    ; 
}
} 
