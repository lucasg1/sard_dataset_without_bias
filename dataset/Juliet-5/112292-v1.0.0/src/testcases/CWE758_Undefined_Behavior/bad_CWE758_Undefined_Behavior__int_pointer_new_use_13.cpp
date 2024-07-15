namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int * * pointer = new int *;
<START>
            int * data = *pointer; 
<END>
            delete pointer;
            printIntLine(*data);
        }
    }
}
} 
