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
        printIntLine(*data);
    }
    else
    {
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
<END>
        ; 
    }
    else
    {
        delete data;
    }
}
} 
