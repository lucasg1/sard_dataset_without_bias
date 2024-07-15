namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    int64_t VAR1;
    data = &VAR1;
    *data = 5LL;
    printLongLongLine(*data);
    goto sink;
sink:
    ; 
}
} 
