namespace NAMESPACE0
{
void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
