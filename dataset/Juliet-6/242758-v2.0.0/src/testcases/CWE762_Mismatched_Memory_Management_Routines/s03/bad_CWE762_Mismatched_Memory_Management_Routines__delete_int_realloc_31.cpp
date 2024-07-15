namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
