namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
<START>
        delete [] data;
<END>
        break;
    }
}
} 
