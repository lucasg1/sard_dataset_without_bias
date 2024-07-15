namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
