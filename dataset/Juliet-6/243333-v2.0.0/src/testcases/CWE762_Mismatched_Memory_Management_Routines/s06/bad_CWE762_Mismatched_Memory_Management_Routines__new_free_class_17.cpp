namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    TwoIntsClass * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new TwoIntsClass;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        free(data);
<END>
    }
}
} 
