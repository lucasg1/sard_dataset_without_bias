namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        int64_t * data = dataRef;
        free(data);
    }
}
void FUN1()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    data = new int64_t[100];
    {
        int64_t * data = dataRef;
        delete [] data;
    }
}
} 
