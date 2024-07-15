namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    goto sink;
sink:
    delete [] data;
}
} 
