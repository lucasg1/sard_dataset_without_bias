namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    goto sink;
sink:
    delete[] data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    int64_t VAR1[100];
    data = VAR1;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    goto sink;
sink:
    ; 
}
} 
