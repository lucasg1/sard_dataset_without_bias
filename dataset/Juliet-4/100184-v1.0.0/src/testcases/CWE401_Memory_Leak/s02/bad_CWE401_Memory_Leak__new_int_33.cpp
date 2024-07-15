namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    {
        int * data = dataRef;
<START>
<END>
        ; 
    }
}
} 
