namespace NAMESPACE0
{
void FUN0()
{
    while(1)
    {
        {
            int data;
            data = 5;
            int * pointer = new int;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            delete pointer;
        }
        break;
    }
}
} 
