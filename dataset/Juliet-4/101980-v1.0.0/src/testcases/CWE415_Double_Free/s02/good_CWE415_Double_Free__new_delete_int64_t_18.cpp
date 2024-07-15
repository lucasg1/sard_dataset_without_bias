namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t;
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
    goto sink;
sink:
    delete data;
}
} 
