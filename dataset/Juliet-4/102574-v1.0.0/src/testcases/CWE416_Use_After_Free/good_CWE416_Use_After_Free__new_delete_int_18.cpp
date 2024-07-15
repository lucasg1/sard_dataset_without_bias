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
    delete data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    *data = 5;
    goto sink;
sink:
    printIntLine(*data);
}
} 
