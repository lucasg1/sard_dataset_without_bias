namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long[100];
    delete [] data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
}
} 
