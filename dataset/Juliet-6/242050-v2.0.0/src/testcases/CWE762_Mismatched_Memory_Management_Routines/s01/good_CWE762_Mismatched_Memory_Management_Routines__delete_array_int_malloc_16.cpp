namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
