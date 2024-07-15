namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
<START>
    delete [] data;
<END>
}
} 
