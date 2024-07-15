namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
