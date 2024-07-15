namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(*data);
<END>
    }
    else
    {
        ; 
    }
}
} 
