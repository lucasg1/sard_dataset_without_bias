namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    *data = 5;
    printIntLine(*data);
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
    goto sink;
sink:
    ; 
}
} 
