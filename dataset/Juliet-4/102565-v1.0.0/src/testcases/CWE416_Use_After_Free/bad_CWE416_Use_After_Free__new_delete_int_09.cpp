namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        printIntLine(*data);
<END>
    }
}
} 
