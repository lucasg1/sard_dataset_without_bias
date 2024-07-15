namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
<START>
    delete [] data;
<END>
}
} 
