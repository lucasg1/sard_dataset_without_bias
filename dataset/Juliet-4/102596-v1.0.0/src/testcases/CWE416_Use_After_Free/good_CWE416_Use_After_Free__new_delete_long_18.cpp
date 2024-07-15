namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long;
    *data = 5L;
    delete data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long;
    *data = 5L;
    goto sink;
sink:
    printLongLine(*data);
}
} 
