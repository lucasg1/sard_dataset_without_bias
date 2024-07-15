namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
} 
