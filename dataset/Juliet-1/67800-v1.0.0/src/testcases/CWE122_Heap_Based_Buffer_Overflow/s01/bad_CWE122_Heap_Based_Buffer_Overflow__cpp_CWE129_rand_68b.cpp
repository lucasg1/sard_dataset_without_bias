namespace NAMESPACE0
{
int VAR1;
int VAR2;
int VAR3;
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0()
{
    int data = VAR1;
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
