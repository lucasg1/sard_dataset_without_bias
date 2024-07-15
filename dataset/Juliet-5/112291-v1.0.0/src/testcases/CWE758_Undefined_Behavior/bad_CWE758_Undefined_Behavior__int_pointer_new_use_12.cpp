namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            int * data;
            data = new int;
            *data = 5;
            int * * pointer = new int *;
            *pointer = data; 
            {
                int * data = *pointer;
                printIntLine(*data);
            }
            delete pointer;
        }
    }
}
} 
