namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = 10;
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(int data)
{
    if(VAR1)
    {
        {
            int i;
            int * buffer = new int[10];
            for (i = 0; i < 10; i++)
            {
                buffer[i] = 0;
            }
            if (data >= 0)
            {
<START>
                buffer[data] = 1;
<END>
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
            delete[] buffer;
        }
    }
}
} 
