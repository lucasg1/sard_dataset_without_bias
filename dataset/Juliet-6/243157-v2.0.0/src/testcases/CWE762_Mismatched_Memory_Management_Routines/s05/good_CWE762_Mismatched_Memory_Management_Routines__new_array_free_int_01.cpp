namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    delete [] data;
}
} 
