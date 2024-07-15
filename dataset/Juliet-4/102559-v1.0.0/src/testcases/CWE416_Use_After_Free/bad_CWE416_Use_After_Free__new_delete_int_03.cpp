namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(5==5)
    {
<START>
        printIntLine(*data);
<END>
    }
}
} 
