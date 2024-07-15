namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int;
    {
        int * data = dataRef;
<START>
        free(data);
<END>
    }
}
} 
