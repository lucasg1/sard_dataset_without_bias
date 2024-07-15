namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass[100];
        break;
    }
    while(1)
    {
<START>
        free(data);
<END>
        break;
    }
}
} 
