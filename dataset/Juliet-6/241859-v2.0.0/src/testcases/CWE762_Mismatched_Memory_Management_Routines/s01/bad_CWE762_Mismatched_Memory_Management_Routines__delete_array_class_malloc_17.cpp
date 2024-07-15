namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    TwoIntsClass * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
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
