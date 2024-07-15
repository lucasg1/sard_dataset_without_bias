namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            static int dataBuffer;
            dataBuffer = 5;
            data = &dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
