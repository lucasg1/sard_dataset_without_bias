namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            int * dataBuffer = (int *)ALLOCA(sizeof(int));
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
