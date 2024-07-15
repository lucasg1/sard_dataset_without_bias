namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
} 
