namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    goto sink;
sink:
    delete data;
}
} 
