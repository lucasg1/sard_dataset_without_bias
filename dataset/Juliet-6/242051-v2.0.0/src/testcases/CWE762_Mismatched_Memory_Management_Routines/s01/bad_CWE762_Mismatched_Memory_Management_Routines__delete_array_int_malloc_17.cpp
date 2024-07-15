namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    for(j = 0; j < 1; j++)
    {
<START>
        delete [] data;
<END>
    }
}
} 
