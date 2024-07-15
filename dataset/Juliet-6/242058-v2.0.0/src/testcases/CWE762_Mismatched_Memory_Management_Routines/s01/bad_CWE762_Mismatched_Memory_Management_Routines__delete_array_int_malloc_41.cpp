namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
