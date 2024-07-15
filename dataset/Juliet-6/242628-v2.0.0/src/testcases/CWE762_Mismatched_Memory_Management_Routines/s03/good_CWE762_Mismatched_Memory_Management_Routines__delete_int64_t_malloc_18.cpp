namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
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
