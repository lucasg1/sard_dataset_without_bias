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
    delete data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t;
    *data = 5LL;
    goto sink;
sink:
    printLongLongLine(*data);
}
} 
