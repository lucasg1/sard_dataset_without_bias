namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    {
        int * data = dataRef;
<START>
        printIntLine(*data);
<END>
    }
}
} 
